/*
 * Copyright (C) 2018 Red Hat
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 *
 * Author: Carlos Garnacho <carlosg@gnome.org>
 */

#ifndef META_SELECTION_SOURCE_X11_H
#define META_SELECTION_SOURCE_X11_H

#include "meta/meta-selection-source.h"
#include "x11/meta-x11-display-private.h"

#define META_TYPE_SELECTION_SOURCE_X11 (meta_selection_source_x11_get_type ())
G_DECLARE_FINAL_TYPE (MetaSelectionSourceX11,
                      meta_selection_source_x11,
                      META, SELECTION_SOURCE_X11,
                      MetaSelectionSource)

void                  meta_selection_source_x11_new_async  (MetaX11Display      *display,
                                                            Window               owner,
                                                            uint32_t             timestamp,
                                                            Atom                 xselection,
                                                            GCancellable        *cancellable,
                                                            GAsyncReadyCallback  callback,
                                                            gpointer             user_data);
MetaSelectionSource * meta_selection_source_x11_new_finish (GAsyncResult  *result,
                                                            GError       **error);

#endif /* META_SELECTION_SOURCE_X11_H */
