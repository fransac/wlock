#define CLR(hex) (((unsigned int)((hex) >> 16) & 0xff) * 0x01010101u), \
                 (((unsigned int)((hex) >>  8) & 0xff) * 0x01010101u), \
                 (((unsigned int)((hex) >>  0) & 0xff) * 0x01010101u)

static Clr colorname[4] = {
	[INIT]      = { CLR(0x000000) }, /* after initialization */
	[INPUT]     = { CLR(0x121212) }, /* during input */
	[INPUT_ALT] = { CLR(0x111111) }, /* during input, second color */
	[FAILED]    = { CLR(0x1a1010) }, /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;
