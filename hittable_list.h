#ifndef HITTABLE_LIST_H
#define HITTABLE_LIST_H

#include <memory>
#include <vector>

#include "hittable.h"

using std::make_shared;
using std::shared_ptr;
using std::vector;

class hittable_list : public hittable {
    public:
        vector<shared_ptr<hittable>> objects;

        hittable_list() = default;
        hittable_list(const shared_ptr<hittable>& object) { add(object); }

        void clear() { objects.clear(); }

        void add(const shared_ptr<hittable> &object) {
            objects.push_back(object);
        }

        bool hit(const ray& r, double ray_tmin, double ray_tmax, hit_record& rec) const override {
            hit_record& copy;
            bool hit = false;
            auto closest_hit = ray_tmax;

            for (const auto& object : objects) {
                if (object->hit(r, ray_tmin, closest_hit, copy)) {
                    hit = true;
                    closest_hit = copy.t;
                    rec = copy;
                }
            }

            return hit;
        }
};

#endif
