/**
 * FreeRDP: A Remote Desktop Protocol client.
 * RDP Server Peer
 *
 * Copyright 2011 Vic Lee
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __PEER
#define __PEER

typedef struct rdp_peer rdpPeer;

#include "rdp.h"
#include <freerdp/peer.h>

struct rdp_peer
{
	freerdp_peer* client;

	rdpRdp* rdp;
};

#endif /* __PEER */
