/*
 * Copyright (c) 2014 CORE Security Technologies
 *
 * This software is provided under under a slightly modified version
 * of the Apache Software License. See the accompanying LICENSE file
 * for more information.
 *
 */

#ifndef __pcapobj__
#define __pcapobj__


PyObject*
new_pcapobject(pcap_t *pcap, bpf_u_int32 net, bpf_u_int32 mask);

extern PyTypeObject PcapObject_Type;

#endif // __pcapobj__
