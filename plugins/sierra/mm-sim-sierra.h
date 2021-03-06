/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details:
 *
 * Copyright (C) 2008 - 2009 Novell, Inc.
 * Copyright (C) 2009 - 2012 Red Hat, Inc.
 * Copyright (C) 2012 Lanedo GmbH
 */

#ifndef MM_SIM_SIERRA_H
#define MM_SIM_SIERRA_H

#include <glib.h>
#include <glib-object.h>

#include "mm-sim.h"

#define MM_TYPE_SIM_SIERRA            (mm_sim_sierra_get_type ())
#define MM_SIM_SIERRA(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), MM_TYPE_SIM_SIERRA, MMSimSierra))
#define MM_SIM_SIERRA_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  MM_TYPE_SIM_SIERRA, MMSimSierraClass))
#define MM_IS_SIM_SIERRA(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), MM_TYPE_SIM_SIERRA))
#define MM_IS_SIM_SIERRA_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  MM_TYPE_SIM_SIERRA))
#define MM_SIM_SIERRA_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  MM_TYPE_SIM_SIERRA, MMSimSierraClass))

typedef struct _MMSimSierra MMSimSierra;
typedef struct _MMSimSierraClass MMSimSierraClass;

struct _MMSimSierra {
    MMSim parent;
};

struct _MMSimSierraClass {
    MMSimClass parent;
};

GType mm_sim_sierra_get_type (void);

void   mm_sim_sierra_new        (MMBaseModem *modem,
                                 GCancellable *cancellable,
                                 GAsyncReadyCallback callback,
                                 gpointer user_data);
MMSim *mm_sim_sierra_new_finish (GAsyncResult  *res,
                                 GError       **error);

#endif /* MM_SIM_SIERRA_H */
