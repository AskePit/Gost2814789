#include "hashTests.h"

namespace gost::hash
{

namespace test01 {
static const size_t input_size = 1;

static const u8 input[1] = {
	0x00
};

static const u8 hash[64] = {
	0xe4, 0xa9, 0x1b, 0x7b, 0x48, 0x65, 0x3a, 0xce,
	0x52, 0x62, 0x1d, 0x39, 0xaa, 0xb6, 0x22, 0x2b,
	0x62, 0x13, 0x60, 0xb7, 0x7f, 0xc8, 0x48, 0xed,
	0x86, 0xbe, 0x28, 0xc4, 0x85, 0xda, 0xe2, 0x3b,
	0x36, 0xbd, 0xc1, 0x83, 0x03, 0xff, 0x7b, 0xe1,
	0xbd, 0x0a, 0x0c, 0x41, 0x0d, 0x50, 0x14, 0x70,
	0xbf, 0x40, 0x5d, 0xa0, 0xbe, 0xf1, 0xdd, 0x10,
	0x64, 0x70, 0xa9, 0x3b, 0x13, 0x38, 0xb6, 0xc6,
};

TestCase testCase{ input_size, input, hash };
} // namespace test01

namespace test02 {
static const size_t input_size = 64;

static const u8 input[64] = {
	0xe4, 0xa9, 0x1b, 0x7b, 0x48, 0x65, 0x3a, 0xce,
	0x52, 0x62, 0x1d, 0x39, 0xaa, 0xb6, 0x22, 0x2b,
	0x62, 0x13, 0x60, 0xb7, 0x7f, 0xc8, 0x48, 0xed,
	0x86, 0xbe, 0x28, 0xc4, 0x85, 0xda, 0xe2, 0x3b,
	0x36, 0xbd, 0xc1, 0x83, 0x03, 0xff, 0x7b, 0xe1,
	0xbd, 0x0a, 0x0c, 0x41, 0x0d, 0x50, 0x14, 0x70,
	0xbf, 0x40, 0x5d, 0xa0, 0xbe, 0xf1, 0xdd, 0x10,
	0x64, 0x70, 0xa9, 0x3b, 0x13, 0x38, 0xb6, 0xc6,
};

static const u8 hash[64] = {
	0x96, 0xe9, 0x2f, 0x9c, 0xb0, 0xc6, 0x72, 0x18,
	0xde, 0xba, 0x69, 0x1d, 0xf5, 0xa5, 0x70, 0x66,
	0x1c, 0xa4, 0x65, 0x5e, 0x0a, 0x0d, 0x55, 0x63,
	0x8f, 0x08, 0xe8, 0xa0, 0xa9, 0xaa, 0x7e, 0x71,
	0x46, 0xfe, 0x70, 0x3f, 0xc8, 0x7a, 0x04, 0x34,
	0x5e, 0x58, 0xfb, 0x2e, 0x3b, 0x66, 0xb2, 0x3d,
	0xf5, 0x0f, 0xe4, 0xdd, 0x14, 0x9d, 0x54, 0x80,
	0x6a, 0xfc, 0xb2, 0x0f, 0x9f, 0xc3, 0xf0, 0xb4,
};

TestCase testCase{ input_size, input, hash };
} // namespace test02

namespace test03 {
static const size_t input_size = 6;

static const u8 input[6] = {
	0x64, 0xa5, 0x60, 0xd0, 0x9a, 0xc1
};

static const u8 hash[64] = {
	0xcb, 0x7d, 0xbf, 0x8e, 0x71, 0xc5, 0x1b, 0x30,
	0xfc, 0xd2, 0xf5, 0xc9, 0x7e, 0xa5, 0xd4, 0xbd,
	0x4f, 0xdd, 0x8a, 0x2e, 0xd9, 0x51, 0x42, 0x1e,
	0xcb, 0xed, 0x3e, 0x7c, 0xfb, 0x34, 0xac, 0x8b,
	0xf0, 0x1f, 0x00, 0x53, 0x38, 0xbf, 0x6d, 0xcf,
	0x8a, 0xe6, 0x18, 0x20, 0x6d, 0xf1, 0x7d, 0x94,
	0xdb, 0x0a, 0xfc, 0x82, 0x88, 0x0b, 0xba, 0x3f,
	0x3c, 0x16, 0x7f, 0xf0, 0xb5, 0xeb, 0x2b, 0x9c,
};

TestCase testCase{ input_size, input, hash };
} // namespace test03

namespace test04 {
static const size_t input_size = 119;

static const u8 input[119] = {
	0x81, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
	0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x3d, 0x00, 0x00, 0x00, 0xfd, 0xfd, 0xfd, 0xfd,
	0x54, 0x4d, 0x50, 0x3d, 0x43, 0x3a, 0x5c, 0x55,
	0x73, 0x65, 0x72, 0x73, 0x5c, 0x61, 0x73, 0x6b,
	0x65, 0x70, 0x5c, 0x41, 0x70, 0x70, 0x44, 0x61,
	0x74, 0x61, 0x5c, 0x4c, 0x6f, 0x63, 0x61, 0x6c,
	0x5c, 0x54, 0x65, 0x6d, 0x70, 0x00, 0xfd, 0xfd,
	0xfd, 0xfd, 0x6b, 0x00, 0x65, 0x00, 0x70, 0x00,
	0x2a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x3f, 0x00, 0x00, 0x00, 0xfd, 0xfd, 0xfd, 0xfd,
	0x55, 0x53, 0x45, 0x52, 0x44, 0x4f, 0x4d, 0x41,
	0x43, 0x3a, 0x5c, 0x55, 0x73, 0x65, 0x72, 0x73,
	0x5c, 0x61, 0x73, 0x6b, 0x65, 0x70, 0x5c, 0x44,
	0x6f, 0x63, 0x75, 0x6d, 0x65, 0x6e, 0x74
};

static const u8 hash[64] = {
	0x22, 0xe6, 0xc4, 0x17, 0xee, 0x50, 0x4a, 0x8c,
	0x59, 0x88, 0x02, 0x87, 0xe1, 0xd7, 0x23, 0x7f,
	0x0a, 0x64, 0x25, 0xa0, 0xc1, 0xb0, 0x75, 0x1d,
	0x8c, 0x05, 0x49, 0x42, 0x42, 0x36, 0xde, 0xea,
	0xfb, 0x2d, 0x5c, 0x20, 0x50, 0x39, 0xe8, 0xd9,
	0x5d, 0xcf, 0xf9, 0xc7, 0x2c, 0x78, 0x00, 0x5f,
	0x03, 0x2a, 0x8e, 0x8b, 0x8a, 0x82, 0xe2, 0x9e,
	0x94, 0x33, 0xd0, 0x58, 0x09, 0x8b, 0x8e, 0xfa,
};

TestCase testCase{ input_size, input, hash };
} // namespace test04

const std::vector<std::reference_wrapper<const TestCase>> &getTests()
{
	static const std::vector<std::reference_wrapper<const TestCase>> tests = {
		test01::testCase,
		test02::testCase,
		test03::testCase,
		test04::testCase,
	};

	return tests;
}

} // namespace gost::hash