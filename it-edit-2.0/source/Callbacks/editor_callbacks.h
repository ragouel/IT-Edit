/** ***********************************************************************************
  * it-edit the Integrated Terminal Editor: a text editor with severals               *
  * integrated functionnalities.                                                      *
  *                                                                                   *
  * Copyright (C) 2016 Brüggemann Eddie.                                              *
  *                                                                                   *
  * This file is part of it-edit.                                                     *
  * it-edit is free software: you can redistribute it and/or modify                   *
  * it under the terms of the GNU General Public License as published by              *
  * the Free Software Foundation, either version 3 of the License, or                 *
  * (at your option) any later version.                                               *
  *                                                                                   *
  * it-edit is distributed in the hope that it will be useful,                        *
  * but WITHOUT ANY WARRANTY; without even the implied warranty of                    *
  * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                      *
  * GNU General Public License for more details.                                      *
  *                                                                                   *
  * You should have received a copy of the GNU General Public License                 *
  * along with it-edit. If not, see <http://www.gnu.org/licenses/>                    *
  *                                                                                   *
  ************************************************************************************/

#ifndef IT_EDIT_EDITOR_CALLBACKS_HH
#define IT_EDIT_EDITOR_CALLBACKS_HH

#include "../Headers/global_vars.h"

extern void update_page_number(GtkWidget *notebook) ;

extern void close_page(GtkButton *button, void *user_data) ;

extern void change_current_page(GtkNotebook *notebook, GtkWidget *page, guint page_num, gpointer user_data) ;

extern void page_reorder(GtkNotebook *notebook, GtkWidget   *child, guint page_num, gpointer user_data) ;

extern void update_completion(GtkTextBuffer *textbuffer, gpointer user_data) ;

extern void update_rows_cols_info(GtkWidget *widget, GdkEvent  *event, gpointer user_data) ;

extern void textbuffer_changed_modified(GtkTextBuffer *textbuffer, GtkWidget *tab_label) ;

extern gboolean textview_button_release_event(GtkWidget *textview, GdkEvent  *event, gpointer   user_data) ; // inline

extern gboolean textview_button_press_event(GtkWidget *textview, GdkEvent  *event, gpointer   user_data) ;

extern void switch_spaces_tabs(GtkWidget *widget, gboolean *switcher) ;

#ifdef RELOADING_FUNC
extern gboolean check_file_has_change(File_Editor *file_editor) ;
#endif

#endif
