#ifndef _OPTIONS_H
#define _OPTIONS_H

void options_init();
void options_deinit();

/**
 * If enabled, use "system default" (larger font, one line) drawing of
 * tasklist items.
 * If disabled (default), use custom method with smaller font and two-line format.
 */
bool options_large_font();

#endif
