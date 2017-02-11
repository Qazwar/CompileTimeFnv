/*
 * Compile time FNV-1a library
 *
 * Copyright (c) 2017, Yohei Hase. All rights reserved.
 * This source code is licensed under the MIT license.
 */

#include "fnv.h"
#include <cstdio>
#include <cassert>

int main(int argc, char* argv[])
{
	static_assert(fnv32("aaa") == 876991330, "fnv calculation error");

	std::string stdstr = "aaa";
	assert(fnv32(stdstr) == fnv32("aaa"));

	const char* charptr = "aaa";
	assert(fnv32(charptr) == fnv32("aaa"));

	if (argc >= 2)
	{
		switch (fnv32(argv[1]))
		{
		case fnv32("foo"):
			puts("foo");
			break;

		case fnv32("bar"):
			puts("bar");
			break;

		default:
			printf("%u\n", fnv32(argv[1]));
			break;
		}
	}

	return 0;
}
