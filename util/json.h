#ifndef __NDCTL_JSON_H__
#define __NDCTL_JSON_H__
#include <stdbool.h>
#include <ndctl/libndctl.h>

bool util_namespace_active(struct ndctl_namespace *ndns);
struct json_object *util_bus_to_json(struct ndctl_bus *bus);
struct json_object *util_dimm_to_json(struct ndctl_dimm *dimm);
struct json_object *util_mapping_to_json(struct ndctl_mapping *mapping);
struct json_object *util_namespace_to_json(struct ndctl_namespace *ndns);
#endif /* __NDCTL_JSON_H__ */
