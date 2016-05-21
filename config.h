#ifndef _CONFIG_H_
#define _CONFIG_H_

// these defines are set by the makefile:
// DEBUG
// VERSION_MAJ, VERSION_MIN
// ARCH_*, PLATFORM_*
// LOGGING_HOST, KIWI_UI_LIST, REPO
// {EDATA_DEVEL, EDATA_EMBED}

#define	DYN_DNS_SERVER	"www.kiwisdr.com"
#define	UPDATE_HOST		"www.kiwisdr.com"

#define	STATS_INTERVAL_SECS		10

// applications
//#define	APP_WSPR

//
// FIXME
// Last time we measured, Debian SPIDEV was _slower_ than our doing PIO directly!
// Does this mean Debian 7.9 is still not doing DMA for large SPI transfers? (we read this someplace)
//
//#define USE_SPIDEV		// use SPI device driver instead of manipulating SPI hardware directly

typedef struct {
	const char *param, *value;
} index_html_params_t;

#include "mongoose.h"

enum compression_e { COMPRESSION_NONE, COMPRESSION_ADPCM };

typedef struct {
	 int port;
	 const char *name;
	 int color_map;
	 double ui_srate;
	 struct mg_server *server;
} user_iface_t;

extern user_iface_t user_iface[];

#endif