sensor_write_register(0x3000, 0x1);
sensor_write_register(0x3003, 0x1);
sensor_write_register(0x3400, 0x53);
sensor_write_register(0x3416, 0xc0);
sensor_write_register(0x3d08, 0x0);
sensor_write_register(0x5000, 0x9);
sensor_write_register(0x3e03, 0x3);
sensor_write_register(0x3928, 0x0);
sensor_write_register(0x3630, 0x58);
sensor_write_register(0x3612, 0x0);
sensor_write_register(0x3632, 0x41);
sensor_write_register(0x3635, 0x4);
sensor_write_register(0x3500, 0x10);
sensor_write_register(0x3631, 0x80);
sensor_write_register(0x3620, 0x44);
sensor_write_register(0x3633, 0x7c);
sensor_write_register(0x3780, 0xb);
sensor_write_register(0x3300, 0x33);
sensor_write_register(0x3301, 0x38);
sensor_write_register(0x3302, 0x30);
sensor_write_register(0x3303, 0x66);
sensor_write_register(0x3304, 0xa0);
sensor_write_register(0x3305, 0x72);
sensor_write_register(0x331e, 0x56);
sensor_write_register(0x321e, 0x0);
sensor_write_register(0x321f, 0xa);
sensor_write_register(0x3216, 0xa);
sensor_write_register(0x3115, 0xa);
sensor_write_register(0x3332, 0x38);
sensor_write_register(0x5054, 0x82);
sensor_write_register(0x3622, 0x26);
sensor_write_register(0x3907, 0x2);
sensor_write_register(0x3908, 0x0);
sensor_write_register(0x3601, 0x18);
sensor_write_register(0x3315, 0x44);
sensor_write_register(0x3308, 0x40);
sensor_write_register(0x3223, 0x22);
sensor_write_register(0x3e0e, 0x50);
sensor_write_register(0x3101, 0x9b);
sensor_write_register(0x3114, 0x3);
sensor_write_register(0x3115, 0xd1);
sensor_write_register(0x3211, 0x60);
sensor_write_register(0x5780, 0xff);
sensor_write_register(0x5781, 0x7f);
sensor_write_register(0x5785, 0xff);
sensor_write_register(0x5000, 0x0);
sensor_write_register(0x3631, 0x82);
if {
    sensor_write_register(0x3010, 0x7);
    sensor_write_register(0x3011, 0x46);
    sensor_write_register(0x3004, 0x4);
    sensor_write_register(0x3610, 0x2b);
    sensor_write_register(0x320c, 0x7);
    sensor_write_register(0x320d, 0x8);
    sensor_write_register(0x320e, 0x3);
    sensor_write_register(0x320f, 0xe8);
    sensor_write_register(0x3210, 0x0);
    sensor_write_register(0x3211, 0x60);
    sensor_write_register(0x3212, 0x0);
    sensor_write_register(0x3213, 0x9);
    sensor_write_register(0x3208, 0x5);
    sensor_write_register(0x3209, 0x0);
    sensor_write_register(0x320a, 0x3);
    sensor_write_register(0x320b, 0xc0);
    sensor_write_register(0x3202, 0x0);
    sensor_write_register(0x3203, 0x8);
    sensor_write_register(0x3206, 0x3);
    sensor_write_register(0x3207, 0xcf);
    sensor_write_register(0x3330, 0xd);
    sensor_write_register(0x3320, 0x6);
    sensor_write_register(0x3321, 0xe8);
    sensor_write_register(r0_66, **reinterpret_cast<int32_t**>(0x4c3974 + r4_40 + r0_42));
    sensor_write_register(0x3323, 0xc0);
    sensor_write_register(0x3600, 0x54);
} else {
    sensor_write_register(0x3010, 0x7);
    sensor_write_register(0x3011, 0x46);
    sensor_write_register(0x3004, 0x4);
    sensor_write_register(0x3610, 0x2b);
    sensor_write_register(0x320c, 0x7);
    sensor_write_register(0x320d, 0x8);
    sensor_write_register(0x320e, 0x3);
    sensor_write_register(0x320f, 0xe8);
    sensor_write_register(0x3210, 0x0);
    sensor_write_register(0x3211, 0x60);
    sensor_write_register(0x3212, 0x0);
    sensor_write_register(0x3213, 0x81);
    sensor_write_register(0x3208, 0x5);
    sensor_write_register(0x3209, 0x0);
    sensor_write_register(0x320a, 0x2);
    sensor_write_register(0x320b, 0xd0);
    sensor_write_register(0x3202, 0x0);
    sensor_write_register(0x3203, 0x8);
    sensor_write_register(0x3206, 0x3);
    sensor_write_register(0x3207, 0xcf);
    sensor_write_register(0x3330, 0xd);
    sensor_write_register(0x3320, 0x6);
    sensor_write_register(0x3321, 0xe8);
    sensor_write_register(0x3322, 0x1);
    sensor_write_register(0x3323, 0xc0);
    sensor_write_register(0x3600, 0x54);
}