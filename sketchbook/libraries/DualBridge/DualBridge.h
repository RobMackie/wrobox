class DualBridge {
    class Motor {
      private:
        int pwm;
	int i1;
	int i2;
      protected:
      public:
	Motor();
	void init(int pwm, int i1, int i2);
	void forward(int speed);
    };
    public:
    DualBridge(int EA, int i1, int i2, int EB, int i3, int i4);
    Motor motorA;
    Motor motorB;
};
