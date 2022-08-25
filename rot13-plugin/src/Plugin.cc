
#include "Plugin.h"

namespace plugin { namespace Demo_Rot13 { Plugin plugin; } }

using namespace plugin::Demo_Rot13;

zeek::plugin::Configuration Plugin::Configure()
	{
	zeek::plugin::Configuration config;
	config.name = "Demo::Rot13";
	config.description = "Caesar cipher rotating a string's characters by 13 places.";
	config.version.major = 0;
	config.version.minor = 1;
	config.version.patch = 0;
	return config;
	}
