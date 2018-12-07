/*
* Generated by SGWrapperGen - DO NOT EDIT!
*
* SwinGame wrapper for C - Text
*
* Wrapping sgText.pas
*/

#ifndef sgText
#define sgText

#include <stdint.h>

#ifndef __cplusplus
  #include <stdbool.h>
#endif

#include "Types.h"

void draw_framerate_with_simple_font(float x, float y);
void draw_simple_text(const char *theText, color textColor, float x, float y);
void draw_simple_text_opts(const char *theText, color textColor, float x, float y, const drawing_options *opts);
void draw_simple_text_opts_byval(const char *theText, color textColor, float x, float y, const drawing_options opts);
void draw_text_with_font_named(const char *theText, color textColor, const char *name, float x, float y);
void draw_text(const char *theText, color textColor, font theFont, float x, float y);
void draw_text_in_rect(const char *theText, color textColor, color backColor, font theFont, font_alignment align, const rectangle *area);
void draw_text_in_rect_byval(const char *theText, color textColor, color backColor, font theFont, font_alignment align, const rectangle area);
void draw_text_with_font_named_opts(const char *theText, color textColor, const char *name, float x, float y, const drawing_options *opts);
void draw_text_with_font_named_opts_byval(const char *theText, color textColor, const char *name, float x, float y, const drawing_options opts);
void draw_text_in_rect_with_font_named(const char *theText, color textColor, color backColor, const char *name, font_alignment align, const rectangle *area);
void draw_text_in_rect_with_font_named_byval(const char *theText, color textColor, color backColor, const char *name, font_alignment align, const rectangle area);
void draw_text_opts(const char *theText, color textColor, font theFont, float x, float y, const drawing_options *opts);
void draw_text_opts_byval(const char *theText, color textColor, font theFont, float x, float y, const drawing_options opts);
void draw_text_with_font_named_size(const char *theText, color textColor, const char *name, int32_t size, float x, float y);
void draw_text_in_rect_opts(const char *theText, color textColor, color backColor, font theFont, font_alignment align, const rectangle *area, const drawing_options *opts);
void draw_text_in_rect_opts_byval(const char *theText, color textColor, color backColor, font theFont, font_alignment align, const rectangle area, const drawing_options opts);
void draw_text_with_font_named_and_size_opts(const char *theText, color textColor, const char *name, int32_t size, float x, float y, const drawing_options *opts);
void draw_text_with_font_named_and_size_opts_byval(const char *theText, color textColor, const char *name, int32_t size, float x, float y, const drawing_options opts);
void draw_text_in_rect_with_font_named_opts(const char *theText, color textColor, color backColor, const char *name, font_alignment align, const rectangle *area, const drawing_options *opts);
void draw_text_in_rect_with_font_named_opts_byval(const char *theText, color textColor, color backColor, const char *name, font_alignment align, const rectangle area, const drawing_options opts);
void draw_text_in_rect_with_font_named_and_size(const char *theText, color textColor, color backColor, const char *name, int32_t size, font_alignment align, const rectangle *area);
void draw_text_in_rect_with_font_named_and_size_byval(const char *theText, color textColor, color backColor, const char *name, int32_t size, font_alignment align, const rectangle area);
void draw_text_in_rect_with_font_named_and_size_opts(const char *theText, color textColor, color backColor, const char *name, int32_t size, font_alignment align, const rectangle *area, const drawing_options *opts);
void draw_text_in_rect_with_font_named_and_size_opts_byval(const char *theText, color textColor, color backColor, const char *name, int32_t size, font_alignment align, const rectangle area, const drawing_options opts);
bitmap draw_text_to_bitmap_at_point_with_font_named_and_size(font font, const char *str, color clrFg, color backgroundColor);
font_style font_font_style(font font);
void font_name_for(const char *fontName, int32_t size, char *result);
font font_named(const char *name);
font font_named_with_size(const char *name, int32_t size);
void font_set_style(font font, font_style value);
void free_font(font *fontToFree);
bool has_font(const char *name);
font load_font(const char *fontName, int32_t size);
font load_font_named(const char *name, const char *filename, int32_t size);
void release_all_fonts();
void release_font(const char *name);
font_alignment text_alignment_from(const char *str);
int32_t text_height(font theFont, const char *theText);
int32_t text_width(font theFont, const char *theText);

#ifdef __cplusplus
// C++ overloaded functions
void draw_framerate(float x, float y);
void draw_text(const char *theText, color textColor, float x, float y);
void draw_text(const char *theText, color textColor, float x, float y, const drawing_options &opts);
void draw_text(const char *theText, color textColor, const char *name, float x, float y);
void draw_text(const char *theText, color textColor, color backColor, font theFont, font_alignment align, const rectangle &area);
void draw_text(const char *theText, color textColor, const char *name, float x, float y, const drawing_options &opts);
void draw_text(const char *theText, color textColor, color backColor, const char *name, font_alignment align, const rectangle &area);
void draw_text(const char *theText, color textColor, font theFont, float x, float y, const drawing_options &opts);
void draw_text(const char *theText, color textColor, const char *name, int32_t size, float x, float y);
void draw_text(const char *theText, color textColor, color backColor, font theFont, font_alignment align, const rectangle &area, const drawing_options &opts);
void draw_text(const char *theText, color textColor, const char *name, int32_t size, float x, float y, const drawing_options &opts);
void draw_text(const char *theText, color textColor, color backColor, const char *name, font_alignment align, const rectangle &area, const drawing_options &opts);
void draw_text(const char *theText, color textColor, color backColor, const char *name, int32_t size, font_alignment align, const rectangle &area);
void draw_text(const char *theText, color textColor, color backColor, const char *name, int32_t size, font_alignment align, const rectangle &area, const drawing_options &opts);
bitmap draw_text_to_bitmap(font font, const char *str, color clrFg, color backgroundColor);
font font_named(const char *name, int32_t size);
void free_font(font &fontToFree);

#endif

#endif
