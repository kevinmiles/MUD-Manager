/*
 * Copyright (c) 2017-2018 Cisco and/or its affiliates.
 * All rights reserved.
 */

enum acl_policy_type {
    CISCO_DACL,
};

cJSON* create_policy_from_acllist(enum acl_policy_type response_type,
				  ACL *acllist, int acl_count, 
				  enum acl_direction direction, int vlan);

cJSON* get_policy_by_aclname(enum acl_policy_type acl_type, char* acl_name);


/*
 * Definitions used by code manipulating ACLs in the JSON file.
 */
#define GETSTR_JSONOBJ(j,v) cJSON_GetObjectItem(j,v) ? cJSON_GetObjectItem(j, v)->valuestring: NULL
#define GETSTR_JSONARRAY(j,i) cJSON_GetArrayItem(j, i)->valuestring
#define GETINT_JSONOBJ(j,v) cJSON_GetObjectItem(j,v) ? cJSON_GetObjectItem(j, v)->valueint: 0

