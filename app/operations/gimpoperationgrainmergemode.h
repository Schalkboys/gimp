/* GIMP - The GNU Image Manipulation Program
 * Copyright (C) 1995 Spencer Kimball and Peter Mattis
 *
 * gimpoperationgrain_mergemode.h
 * Copyright (C) 2008 Michael Natterer <mitch@gimp.org>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __GIMP_OPERATION_GRAIN_MERGE_MODE_H__
#define __GIMP_OPERATION_GRAIN_MERGE_MODE_H__


#include "gimpoperationpointlayermode.h"


#define GIMP_TYPE_OPERATION_GRAIN_MERGE_MODE            (gimp_operation_grain_merge_mode_get_type ())
#define GIMP_OPERATION_GRAIN_MERGE_MODE(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), GIMP_TYPE_OPERATION_GRAIN_MERGE_MODE, GimpOperationGrainMergeMode))
#define GIMP_OPERATION_GRAIN_MERGE_MODE_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  GIMP_TYPE_OPERATION_GRAIN_MERGE_MODE, GimpOperationGrainMergeModeClass))
#define GIMP_IS_OPERATION_GRAIN_MERGE_MODE(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GIMP_TYPE_OPERATION_GRAIN_MERGE_MODE))
#define GIMP_IS_OPERATION_GRAIN_MERGE_MODE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  GIMP_TYPE_OPERATION_GRAIN_MERGE_MODE))
#define GIMP_OPERATION_GRAIN_MERGE_MODE_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  GIMP_TYPE_OPERATION_GRAIN_MERGE_MODE, GimpOperationGrainMergeModeClass))


typedef struct _GimpOperationGrainMergeMode      GimpOperationGrainMergeMode;
typedef struct _GimpOperationGrainMergeModeClass GimpOperationGrainMergeModeClass;

struct _GimpOperationGrainMergeMode
{
  GimpOperationPointLayerMode  parent_instance;
};

struct _GimpOperationGrainMergeModeClass
{
  GimpOperationPointLayerModeClass  parent_class;
};


GType   gimp_operation_grain_merge_mode_get_type (void) G_GNUC_CONST;

gboolean gimp_operation_grain_merge_mode_process_pixels (gfloat              *in,
                                                         gfloat              *layer,
                                                         gfloat              *mask,
                                                         gfloat              *out,
                                                         gfloat               opacity,
                                                         glong                samples,
                                                         const GeglRectangle *roi,
                                                         gint                 level);

#endif /* __GIMP_OPERATION_GRAIN_MERGE_MODE_H__ */
