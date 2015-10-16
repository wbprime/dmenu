/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static bool topbar = true;                  /* -b  option; if False, dmenu appears at bottom */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Monospace:size=12"
};
static const char *prompt      = "[Search]";      /* -p  option; prompt to the elft of input field */
static const char *normbgcolor = "#222222"; /* -nb option; normal background                 */
static const char *normfgcolor = "#bbbbbb"; /* -nf option; normal foreground                 */
static const char *selbgcolor  = "#005577"; /* -sb option; selected background               */
static const char *selfgcolor  = "#eeeeee"; /* -sf option; selected foreground               */
static const char *outbgcolor  = "#00ffff";
static const char *outfgcolor  = "#000000";
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
