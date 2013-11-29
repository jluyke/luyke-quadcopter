#ifndef ComplementaryFilter_h
#define ComplementaryFilter_h

#define ALPHA 0.6
#define DT 0.001

class ComplementaryFilter
{
	public:
		void UpdateWithFilter(int accelXInput, int accelYInput, int gyroXInput, int gyroYInput);
		float GetPitch() { return pitch; }
		float GetRoll() { return roll; }
	private:
		float pitch;
		float roll;
		float filteredAccX, filteredAccY;
		float filteredGyroX, filteredGyroY;
		float lastGyroXInput, lastGyroYInput;
		void LowPassFilter(int x, int y);
		void HighPassFilter(int x, int y);
};

#endif