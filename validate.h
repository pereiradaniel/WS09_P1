template<typename T, typename U>
bool validate(const T& minimum, const U* testValue, int num_elem, bool* values) {
	bool result = true;

	for (int i = 0; i < num_elem; i++) {
		if (testValue[i] >= minimum) {
			values[i] = true;
		}
		else {
			values[i] = false;
			result = false;
		}
	}
	return result;
};