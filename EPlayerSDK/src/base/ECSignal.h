/*
 * ****************************************************************
 * This software is a media player SDK implementation
 * GPL:
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Library General Public License for more details. You should
 * have received a copy of the GNU Library General Public License
 * along with this library; if not, write to the Free Foundation,
 * Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Project: EC < Enjoyable Coding >
 *
 * ECSignal.h
 * This file for mutil thread used signal define.
 *
 * Eamil:   epengao@126.com
 * Author:  Gao Peng
 * Version: Intial first version.
 * ****************************************************************
 */

#ifndef EC_SIGNAL_H
#define EC_SIGNAL_H

#include "ECType.h"
#include <pthread.h>

class ECSignal
{
public:
    ECSignal();
    ~ECSignal();
    void Send();
    void Wait();
    void TimedWait(EC_U32 nTimeout);

private:
    pthread_cond_t m_Cond;
    pthread_mutex_t m_Mutex;
};

#endif /* EC_SIGNAL_H */
