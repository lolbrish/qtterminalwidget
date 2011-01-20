
#define PUTTY_DO_GLOBALS	       /* actually _define_ globals */

#include "putty.h"
#include "terminal.h"

struct gui_data {
    Terminal *term;
};

int from_backend(void *frontend, int is_stderr, const char *data, int len)
{
    struct gui_data *inst = (struct gui_data *)frontend;
    return term_data(inst->term, is_stderr, data, len);
}

char *x_get_default(const char *key)
{
    //return XGetDefault(GDK_DISPLAY(), app_name, key);
    return "";
}

void free_ctx(Context ctx)
{
    /*
    struct draw_ctx *dctx = (struct draw_ctx *)ctx;
    // struct gui_data *inst = dctx->inst;
    GdkGC *gc = dctx->gc;
    gdk_gc_unref(gc);
    sfree(dctx);
    */
}

void timer_change_notify(long next)
{}

void set_sbar(void *frontend, int total, int start, int page)
{}

int pt_main(int argc, char **argv)
{
    return 0;
}

int font_dimension(void *frontend, int which)/* 0 for width, 1 for height */
{
    return 0;
}

long get_windowid(void *frontend)
{
    return 0l;
}

int uxsel_input_add(int fd, int rwx) {
    return 0;
}

void uxsel_input_remove(int id) {
}

void request_paste(void *frontend)
{
}

void set_title(void *frontend, char *title)
{
}

void set_raw_mouse_mode(void *frontend, int activate)
{
}

void do_text(Context ctx, int x, int y, wchar_t *text, int len,
	     unsigned long attr, int lattr)
{
}

int char_width(Context ctx, int uc)
{
    return 0;
}

void move_window(void *frontend, int x, int y)
{
}

void set_zorder(void *frontend, int top)
{
}

void refresh_window(void *frontend)
{
}

char *get_x_display(void *frontend)
{
    return NULL;
}

void notify_remote_exit(void *frontend)
{
}

void sys_cursor(void *frontend, int x, int y)
{
    /*
     * This is meaningless under X.
     */
}

void set_zoomed(void *frontend, int zoomed)
{
}

void request_resize(void *frontend, int w, int h)
{
}

void get_window_pixels(void *frontend, int *x, int *y)
{
}

void do_cursor(Context ctx, int x, int y, wchar_t *text, int len,
	       unsigned long attr, int lattr)
{
}

char *get_window_title(void *frontend, int icon)
{
    return NULL;
}

/*
 * Minimise or restore the window in response to a server-side
 * request.
 */
void set_iconic(void *frontend, int iconic)
{
}

void write_clip(void *frontend, wchar_t * data, int *attr, int len, int must_deselect)
{
}

int platform_default_i(const char *name, int def)
{
    return 0;
}

Context get_ctx(void *frontend)
{
    return NULL;
}

void palette_set(void *frontend, int n, int r, int g, int b)
{

}

void palette_reset(void *frontend)
{

}

/*
 * Report whether the window is iconic, for terminal reports.
 */
int is_iconic(void *frontend)
{
    return 0;
}

/*
 * Report the window's position, for terminal reports.
 */
void get_window_pos(void *frontend, int *x, int *y)
{
}

/*
 * This is still called when mode==BELL_VISUAL, even though the
 * visual bell is handled entirely within terminal.c, because we
 * may want to perform additional actions on any kind of bell (for
 * example, taskbar flashing in Windows).
 */
void do_beep(void *frontend, int mode)
{
}

void logevent(void *frontend, const char *string)
{
}

Filename platform_default_filename(const char *name)
{
    Filename ret;
    *ret.path = '\0';
    return ret;
}

void modalfatalbox(char *p, ...)
{
}

void set_icon(void *frontend, char *title)
{
}

void get_clip(void *frontend, wchar_t ** p, int *len)
{
}

/* Dummy routine, only required in plink. */
void ldisc_update(void *frontend, int echo, int edit)
{
}

char *platform_default_s(const char *name)
{
    return NULL;
}

/*
 * Default settings that are specific to pterm.
 */
FontSpec platform_default_fontspec(const char *name)
{
    FontSpec ret;
    *ret.name = '\0';
    return ret;
}

void frontend_keypress(void *handle)
{
}
