static Clr colorname[4] = {
	[INIT]      = { 0x00000000, 0x00000000, 0x00000000 }, /* after initialization */
	[INPUT]     = { 0x101010ff, 0x101010ff, 0x101010ff }, /* during input */
	[INPUT_ALT] = { 0x0b0b0bff, 0x0b0b0bff, 0x0b0b0bff }, /* during input, second color */
	[FAILED]    = { 0x200000ff, 0x000000ff, 0x000000ff }, /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;
