#ifndef HITTABLE_LIST_H
#define HITTABLE_LIST_H

#include <vector>

#include "hittable.h"

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

        bool hit(const ray& r, interval ray_t, hit_record& rec) const override {
            hit_record copy;
            bool hit = false;
            auto closest_hit = ray_t.max;

            for (const auto& object : objects) {
                if (object->hit(r, interval(ray_t.min, closest_hit), copy)) {
                    hit = true;
                    closest_hit = copy.t;
                    rec = copy;
                }
            }

            return hit;
        }
};

#endif
