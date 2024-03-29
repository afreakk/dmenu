/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"hack:pixelsize=18:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char bg0[]	= "#1d2021";
static const char bg1[]	= "#665c54";
static const char fg0[]	= "#bdae93";
static const char fg1[]	= "#fbf1c7";
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { fg0, bg0 },
	[SchemeNormHighlight] = { fg1, bg0 },
	[SchemeSel] = { fg0, bg1 },
	[SchemeSelHighlight] = { fg1, bg1 },
	[SchemeOut] = { fg1, bg1 },
};
static const unsigned int border_width = 5;
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
