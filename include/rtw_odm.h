/******************************************************************************
 *
 * Copyright(c) 2013 Realtek Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA
 *
 *
 ******************************************************************************/
#ifndef __RTW_ODM_H__
#define __RTW_ODM_H__

#include <drv_types.h>

/*
* This file provides utilities/wrappers for rtw driver to use ODM
*/

int _rtw_odm_dbg_comp_msg(_adapter *adapter, char *buf, int len);
void _rtw_odm_dbg_comp_msg_seq(_adapter *adapter, struct seq_file *m);
void rtw_odm_dbg_comp_msg(_adapter *adapter);
void rtw_odm_dbg_comp_set(_adapter *adapter, u64 comps);
int _rtw_odm_dbg_level_msg(_adapter *adapter, char *buf, int len);
void _rtw_odm_dbg_level_msg_seq(_adapter *adapter, struct seq_file *m);
void rtw_odm_dbg_level_msg(_adapter *adapter);
void rtw_odm_dbg_level_set(_adapter *adapter, u32 level);

int _rtw_odm_adaptivity_parm_msg(_adapter *adapter, char *buf, int len);
void _rtw_odm_adaptivity_parm_msg_seq(_adapter *adapter, struct seq_file *m);
void rtw_odm_adaptivity_parm_msg(_adapter *adapter);
void rtw_odm_adaptivity_parm_set(_adapter *adapter, s8 TH_L2H_ini, s8 TH_EDCCA_HL_diff,
	s8 IGI_Base, bool ForceEDCCA, u8 AdapEn_RSSI, u8 IGI_LowerBound);

#endif // __RTW_ODM_H__

