/*
 * Generated by MTK SP DrvGen Version 03.13.6 for MT6589_NP. Copyright MediaTek Inc. (C) 2013.
 * Sat Feb 28 20:30:26 2015
 * Do Not Modify the File.
 */

#ifndef __CUST_EINTH
#define __CUST_EINTH
#ifdef __cplusplus
extern "C" {
#endif
#define CUST_EINT_POLARITY_LOW              0
#define CUST_EINT_POLARITY_HIGH             1
#define CUST_EINT_DEBOUNCE_DISABLE          0
#define CUST_EINT_DEBOUNCE_ENABLE           1
#define CUST_EINT_EDGE_SENSITIVE            0
#define CUST_EINT_LEVEL_SENSITIVE           1
//////////////////////////////////////////////////////////////////////////////


#define CUST_EINTF_TRIGGER_RISING						 1
#define CUST_EINTF_TRIGGER_FALLING                      2
#define CUST_EINTF_TRIGGER_HIGH                         4
#define CUST_EINTF_TRIGGER_LOW                          8



#define CUST_EINT_ALS_NUM              1
#define CUST_EINT_ALS_DEBOUNCE_CN      1
#define CUST_EINT_ALS_POLARITY         CUST_EINT_POLARITY_LOW
#define CUST_EINT_ALS_SENSITIVE        CUST_EINT_LEVEL_SENSITIVE
#define CUST_EINT_ALS_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_ENABLE
#define CUST_EINT_ALS_TYPE			CUST_EINTF_TRIGGER_LOW

#define CUST_EINT_MT6320_PMIC_NUM              3
#define CUST_EINT_MT6320_PMIC_DEBOUNCE_CN      1
#define CUST_EINT_MT6320_PMIC_POLARITY         CUST_EINT_POLARITY_HIGH
#define CUST_EINT_MT6320_PMIC_SENSITIVE        CUST_EINT_LEVEL_SENSITIVE
#define CUST_EINT_MT6320_PMIC_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_ENABLE
#define CUST_EINT_MT6320_PMIC_TYPE			CUST_EINTF_TRIGGER_HIGH

#define CUST_EINT_TOUCH_PANEL_NUM              5
#define CUST_EINT_TOUCH_PANEL_DEBOUNCE_CN      0
#define CUST_EINT_TOUCH_PANEL_POLARITY         CUST_EINT_POLARITY_LOW
#define CUST_EINT_TOUCH_PANEL_SENSITIVE        CUST_EINT_EDGE_SENSITIVE
#define CUST_EINT_TOUCH_PANEL_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE
#define CUST_EINT_TOUCH_PANEL_TYPE			CUST_EINTF_TRIGGER_FALLING

#define CUST_EINT_MSE_NUM              8
#define CUST_EINT_MSE_DEBOUNCE_CN      0
#define CUST_EINT_MSE_POLARITY         CUST_EINT_POLARITY_LOW
#define CUST_EINT_MSE_SENSITIVE        CUST_EINT_LEVEL_SENSITIVE
#define CUST_EINT_MSE_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE
#define CUST_EINT_MSE_TYPE			CUST_EINTF_TRIGGER_LOW

#define CUST_EINT_WIFI_NUM              9
#define CUST_EINT_WIFI_DEBOUNCE_CN      0
#define CUST_EINT_WIFI_POLARITY         CUST_EINT_POLARITY_LOW
#define CUST_EINT_WIFI_SENSITIVE        CUST_EINT_LEVEL_SENSITIVE
#define CUST_EINT_WIFI_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE
#define CUST_EINT_WIFI_TYPE			CUST_EINTF_TRIGGER_LOW

#define CUST_EINT_ACCDET_NUM              10
#define CUST_EINT_ACCDET_DEBOUNCE_CN      256
#define CUST_EINT_ACCDET_POLARITY         CUST_EINT_POLARITY_LOW
#define CUST_EINT_ACCDET_SENSITIVE        CUST_EINT_LEVEL_SENSITIVE
#define CUST_EINT_ACCDET_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_ENABLE
#define CUST_EINT_ACCDET_TYPE			CUST_EINTF_TRIGGER_LOW

#define CUST_EINT_OTG_IDDIG_NUM              34
#define CUST_EINT_OTG_IDDIG_DEBOUNCE_CN      0
#define CUST_EINT_OTG_IDDIG_POLARITY         CUST_EINT_POLARITY_HIGH
#define CUST_EINT_OTG_IDDIG_SENSITIVE        CUST_EINT_LEVEL_SENSITIVE
#define CUST_EINT_OTG_IDDIG_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE
#define CUST_EINT_OTG_IDDIG_TYPE			CUST_EINTF_TRIGGER_HIGH

#define CUST_EINT_COMBO_BGF_NUM              154
#define CUST_EINT_COMBO_BGF_DEBOUNCE_CN      0
#define CUST_EINT_COMBO_BGF_POLARITY         CUST_EINT_POLARITY_LOW
#define CUST_EINT_COMBO_BGF_SENSITIVE        CUST_EINT_LEVEL_SENSITIVE
#define CUST_EINT_COMBO_BGF_DEBOUNCE_EN      CUST_EINT_DEBOUNCE_DISABLE
#define CUST_EINT_COMBO_BGF_TYPE			CUST_EINTF_TRIGGER_LOW



//////////////////////////////////////////////////////////////////////////////
#ifdef __cplusplus
}
#endif
#endif //_CUST_EINT_H


