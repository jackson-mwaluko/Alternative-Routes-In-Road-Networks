#define p_b push_back
#define m_p make_pair
#define all(v) v.begin(),v.end()
#define INF 1000000000

int width=1250;		//width of the canvas
int height=700;		//height of the canvas
int road_width=110;	//width of the road
int hor_road_gap=150;	//gap in horizontal road
int ver_road_gap=100;	//gap in vertical road
int hor_gap=100;
int ver_gap=100;

int n=3;		//No. of rows
int m=4;		//No. of columns

double dist[5][5];	
bool used[5][5];

int no_of_vehicle=14;	//Stores the number of vehicles.

int x,y;
int dx[]={-1,1,0,0};	//To traverse along the grids
int dy[]={0,0,-1,1};	//To traverse along the grids

bool paus=false,draw=false;

stack<pair<int,int> > path;	//To store the path from source to destination.

vector<double> speeds;		//stores the speed of vehicles.
vector<pair<double,double> > positions;		//stores the position of vehicles.
vector<bool> directions;	//stores the direction of vehicles.
vector<char> orientations;	//stores the orientation of vehicles.

queue<double> hor_left;
queue<double> hor_right;
queue<double> ver_up;
queue<double> ver_down;

map<pair<pair<int,int>,pair<int,int> >,double > weights;	//stores the weights of different road sections.
map<pair<int,int>,pair<int,int> > parent;			//stores the parent of the current grid.
pair<int,int> start,dest;	
map<pair<int,int>,pair<double,double> > point_map;
map<pair<int,int>,double> map_speed;

double colors[20][3];