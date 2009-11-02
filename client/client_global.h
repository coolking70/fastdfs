/**
* Copyright (C) 2008 Happy Fish / YuQing
*
* FastDFS may be copied only under the terms of the GNU General
* Public License V3, which may be found in the FastDFS source kit.
* Please visit the FastDFS Home Page http://www.csource.org/ for more detail.
**/

//client_global.h

#ifndef _CLIENT_GLOBAL_H
#define _CLIENT_GLOBAL_H

#include "common_define.h"
#include "tracker_types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct
{
	int server_count;
	int server_index;  //server index for roundrobin
	TrackerServerInfo *servers;
} TrackerServerGroup;

extern int g_tracker_server_http_port;
extern TrackerServerGroup g_tracker_group;

extern bool g_anti_steal_token;
extern BufferInfo g_anti_steal_secret_key;

#ifdef __cplusplus
}
#endif

#endif