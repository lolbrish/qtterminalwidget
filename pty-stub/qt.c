
#define PUTTY_DO_GLOBALS /* actually _define_ globals */

#include "putty.h"
#include "terminal.h"

#include <assert.h>

struct gui_data {
    Terminal *term;
};

int from_backend(void *frontend, int is_stderr, const char *data, int len)
{
    assert(0 == 1);
    return 0;
}

char *x_get_default(const char *key)
{
    assert(0 == 1);
    return "";
}

void free_ctx(Context ctx)
{
    assert(0 == 1);
}

void timer_change_notify(long next)
{
    assert(0 == 1);
}

void set_sbar(void *frontend, int total, int start, int page)
{
    assert(0 == 1);
}

int pt_main(int argc, char **argv)
{
    assert(0 == 1);
    return 0;
}

int font_dimension(void *frontend, int which)/* 0 for width, 1 for height */
{
    assert(0 == 1);
    return 0;
}

long get_windowid(void *frontend)
{
    assert(0 == 1);
    return 0l;
}

int uxsel_input_add(int fd, int rwx) {
    assert(0 == 1);
    return 0;
}

void uxsel_input_remove(int id) 
{
    assert(0 == 1);
}

void request_paste(void *frontend)
{
    assert(0 == 1);
}

void set_title(void *frontend, char *title)
{
    assert(0 == 1);
}

void set_raw_mouse_mode(void *frontend, int activate)
{
    assert(0 == 1);
}

void do_text(Context ctx, int x, int y, wchar_t *text, int len,
	     unsigned long attr, int lattr)
{
    assert(0 == 1);
}

int char_width(Context ctx, int uc)
{
    assert(0 == 1);
    return 0;
}

void move_window(void *frontend, int x, int y)
{
    assert(0 == 1);
}

void set_zorder(void *frontend, int top)
{
    assert(0 == 1);
}

void refresh_window(void *frontend)
{
    assert(0 == 1);
}

char *get_x_display(void *frontend)
{
    assert(0 == 1);
    return NULL;
}

void notify_remote_exit(void *frontend)
{
    assert(0 == 1);
}

void sys_cursor(void *frontend, int x, int y)
{
    assert(0 == 1);
}

void set_zoomed(void *frontend, int zoomed)
{
    assert(0 == 1);
}

void request_resize(void *frontend, int w, int h)
{
    assert(0 == 1);
}

void get_window_pixels(void *frontend, int *x, int *y)
{
    assert(0 == 1);
}

void do_cursor(Context ctx, int x, int y, wchar_t *text, int len,
	       unsigned long attr, int lattr)
{
    assert(0 == 1);
}

char *get_window_title(void *frontend, int icon)
{
    assert(0 == 1);
    return NULL;
}

/*
 * Minimise or restore the window in response to a server-side
 * request.
 */
void set_iconic(void *frontend, int iconic)
{
    assert(0 == 1);
}

void write_clip(void *frontend, wchar_t * data, int *attr, int len, int must_deselect)
{
    assert(0 == 1);
}

int platform_default_i(const char *name, int def)
{
    assert(0 == 1);
    return 0;
}

Context get_ctx(void *frontend)
{
    assert(0 == 1);
    return NULL;
}

void palette_set(void *frontend, int n, int r, int g, int b)
{
    assert(0 == 1);
}

void palette_reset(void *frontend)
{
    assert(0 == 1);
}

/*
 * Report whether the window is iconic, for terminal reports.
 */
int is_iconic(void *frontend)
{
    assert(0 == 1);
    return 0;
}

/*
 * Report the window's position, for terminal reports.
 */
void get_window_pos(void *frontend, int *x, int *y)
{
    assert(0 == 1);
}

/*
 * This is still called when mode==BELL_VISUAL, even though the
 * visual bell is handled entirely within terminal.c, because we
 * may want to perform additional actions on any kind of bell (for
 * example, taskbar flashing in Windows).
 */
void do_beep(void *frontend, int mode)
{
    assert(0 == 1);
}

void logevent(void *frontend, const char *string)
{
    assert(0 == 1);
}

Filename platform_default_filename(const char *name)
{
    assert(0 == 1);
    Filename ret;
    *ret.path = '\0';
    return ret;
}

void modalfatalbox(char *p, ...)
{
    assert(0 == 1);
}

void set_icon(void *frontend, char *title)
{
    assert(0 == 1);
}

void get_clip(void *frontend, wchar_t ** p, int *len)
{
    assert(0 == 1);
}

/* Dummy routine, only required in plink. */
void ldisc_update(void *frontend, int echo, int edit)
{
    assert(0 == 1);
}

char *platform_default_s(const char *name)
{
    assert(0 == 1);
    return NULL;
}

FontSpec platform_default_fontspec(const char *name)
{
    assert(0 == 1);
    FontSpec ret;
    *ret.name = '\0';
    return ret;
}

void frontend_keypress(void *handle)
{
    assert(0 == 1);
}
