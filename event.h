#include <cstdio>

// These #ifndef and #define lines make it so that, if this file is
// read more than once by the compiler, its body is skipped on all
// but the first time it is read.

#ifndef EVENT_H
#define EVENT_H

struct Event
{
	int u;
	int v;
	double t;

	Event(int preivous, int next, double time)
	{
		u = preivous;
		v = next;
		t = time;
    }
};

#endif
