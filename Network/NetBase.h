#ifndef _NETBASE_H_
#define _NETBASE_H_

//=============================================================================================================================
/// 消息包头
//=============================================================================================================================
typedef struct tagPACKET_HEADER
{
	WORD	size;		/// 消息长度
} PACKET_HEADER;

#endif