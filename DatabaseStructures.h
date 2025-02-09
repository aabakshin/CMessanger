#ifndef DATABASE_STRUCTURES_H_SENTRY
#define DATABASE_STRUCTURES_H_SENTRY

enum
{
	BUFFER_SIZE					=			2048,
	MIN_DB_RECORDS_NUM			=			  10,
	LOGIN_SIZE					=			  18,
	PASS_SIZE					=			  22,
	LAST_IP_SIZE				=			  22,
	LAST_DATE_IN_SIZE			=			  50,
	REGISTRATION_DATE_SIZE		=			  50,
	RANK_SIZE					=			   2,
	REALNAME_SIZE				=			  50,
	QUOTE_SIZE				    =			 100
};

typedef struct
{
	int ID;
	char username[LOGIN_SIZE];
	char pass[PASS_SIZE];
	char rank[RANK_SIZE];
	char realname[REALNAME_SIZE];
	int age;
	char quote[QUOTE_SIZE];
} DBUsersInformation;

typedef struct
{
	int ID;
	int muted;
	int start_mute_time;
	int mute_time;
	int mute_time_left;
	char last_ip[LAST_IP_SIZE];
	char last_date_in[LAST_DATE_IN_SIZE];
	char last_date_out[LAST_DATE_IN_SIZE];
	char registration_date[REGISTRATION_DATE_SIZE];
} DBXUsersInformation;


#endif
