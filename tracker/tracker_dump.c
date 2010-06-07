/**
* Copyright (C) 2008 Happy Fish / YuQing
*
* FastDFS may be copied only under the terms of the GNU General
* Public License V3, which may be found in the FastDFS source kit.
* Please visit the FastDFS Home Page http://www.csource.org/ for more detail.
**/

#include "tracker_dump.h"

/*
bool g_continue_flag = true;
int g_server_port = FDFS_TRACKER_SERVER_DEF_PORT;
int g_max_connections = DEFAULT_MAX_CONNECTONS;
int g_sync_log_buff_interval = SYNC_LOG_BUFF_DEF_INTERVAL;
int g_check_active_interval = CHECK_ACTIVE_DEF_INTERVAL;

FDFSGroups g_groups;
int g_storage_stat_chg_count = 0;
int g_storage_sync_time_chg_count = 0; //sync timestamp
int g_storage_reserved_mb = 0;

int g_allow_ip_count = 0;
in_addr_t *g_allow_ip_addrs = NULL;

struct base64_context g_base64_context;
char g_run_by_group[32] = {0};
char g_run_by_user[32] = {0};

bool g_storage_ip_changed_auto_adjust = true;
bool g_thread_kill_done = false;

int g_thread_stack_size = 64 * 1024;

#ifdef WITH_HTTPD
FDFSHTTPParams g_http_params;
int g_http_check_interval = 30;
int g_http_check_type = FDFS_HTTP_CHECK_ALIVE_TYPE_TCP;
char g_http_check_uri[128] = {0};
bool g_http_servers_dirty = false;
#endif

#if defined(DEBUG_FLAG) && defined(OS_LINUX)
char g_exe_name[256] = {0};
#endif
*/

void fdfs_dump_group_stat(FDFSGroupInfo *pGroup, char *buff, const int buffSize)
{
	snprintf(buff, buffSize, "group_name=%s, free_mb="INT64_PRINTF_FORMAT
		", server count=%d, "
		"storage_port=%d, storage_http_port=%d, "
		"active server count=%d, current_write_server=%d, "
		"store_path_count=%d, subdir_count_per_path=%d\n", 
		pGroup->group_name, pGroup->free_mb, 
		pGroup->count, pGroup->storage_port,
		pGroup->storage_http_port, pGroup->active_count, 
		pGroup->current_write_server, pGroup->store_path_count,
		pGroup->subdir_count_per_path);
}

void fdfs_dump_storage_stat(FDFSStorageDetail *pServer, char *buff, const int buffSize)
{
}
