/*
 These are fake ARM float functions. They are used to get rid of the warnings when compile
 with flag "-mfloat-abi=soft", which will cause errors when installing the driver.
*/

void __aeabi_dadd(void) {}
void __aeabi_dcmpgt(void) {}
void __aeabi_dcmplt(void) {}
void __aeabi_f2iz(void) {}
void __aeabi_i2f(void) {}
void __aeabi_i2d(void) {}
void __aeabi_dcmple(void) {}
void __aeabi_dmul(void) {}
void __aeabi_dcmpge(void) {}
void __aeabi_d2f(void) {}
void __aeabi_d2iz(void) {}
void __aeabi_d2uiz(void) {}
void __aeabi_fsub(void) {}
void __aeabi_ddiv(void) {}
void __aeabi_fcmple(void) {}
void __aeabi_dsub(void) {}
void __aeabi_ui2d(void) {}
