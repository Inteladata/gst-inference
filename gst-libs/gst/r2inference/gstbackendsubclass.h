/*
 * GStreamer
 * Copyright (C) 2018-2020 RidgeRun <support@ridgerun.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 */

#ifndef __GST_BACKENDSUBCLASS_H__
#define __GST_BACKENDSUBCLASS_H__

#include "gstbackend.h"

#include <r2i/r2i.h>

G_BEGIN_DECLS

void gst_backend_get_property (GObject * object, guint property_id,
                               GValue * value, GParamSpec * pspec);
void gst_backend_set_property (GObject * object, guint property_id,
                               const GValue * value, GParamSpec * pspec);
void gst_backend_install_properties (GstBackendClass * klass,
                                r2i::FrameworkCode code);
gboolean gst_backend_set_framework_code (GstBackend * backend,
                                         r2i::FrameworkCode code);

gboolean gst_inference_backend_register (const gchar* type_name, r2i::FrameworkCode code);

G_END_DECLS
#endif //__GST_BACKENDSUBCLASS_H__
