#pragma once

#include "gost_types.h"
#include <vector>

namespace gost::hash
{

struct TestCase {
	const size_t input_size;
	const byte* input;
	const byte* hash;
};

const std::vector<std::reference_wrapper<const TestCase>> &getTests();

} // namespace gost::hash