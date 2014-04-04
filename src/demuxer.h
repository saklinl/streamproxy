#ifndef _demuxer_h_
#define _demuxer_h_

#include "pidmap.h"

#include <stdlib.h>

#include <string>

class Demuxer
{
	private:

		enum
		{
			buffer_size = 1024 * 188,
		};

		int		id;
		int		fd;
		PidMap	pids;

		Demuxer();
		Demuxer(const Demuxer &);

	public:

		Demuxer(int id, const PidMap &)	throw(std::string);
		~Demuxer()						throw();

		int getfd()				const	throw();
};

#endif