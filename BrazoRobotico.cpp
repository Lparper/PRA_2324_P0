//Brazo robótico
//
class BrazoRobotico{
	private:
		int x;
		int y;
		int z;
		bool objeto;
	public:
		BrazoRobotico(int x, int y, int z, bool objeto){
			this-> x = x;
			this-> y = y;
			this-> z = z;
			this-> objeto= objeto;
		}
		
