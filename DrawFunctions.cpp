void draw_vehicles(){		//for drawing the vehicles.
	
	for(int i=0;i<no_of_vehicle;i++){
		glColor3f(colors[i][0],colors[i][1],colors[i][2]);

		if(vehicle[i].orientation=='H'&&vehicle[i].direction==0){
			glPushMatrix();
				glBegin(GL_POLYGON);
					glVertex2f(vehicle[i].vehicle_posX,vehicle[i].vehicle_posY);
					glVertex2f(vehicle[i].vehicle_posX,vehicle[i].vehicle_posY-40);
					glVertex2f(vehicle[i].vehicle_posX-65,vehicle[i].vehicle_posY-40);
					glVertex2f(vehicle[i].vehicle_posX-90,vehicle[i].vehicle_posY-20);
					glVertex2f(vehicle[i].vehicle_posX-65,vehicle[i].vehicle_posY);
				glEnd();
			glPopMatrix();
		}
		else if(vehicle[i].orientation=='H'&&vehicle[i].direction==1){
			glPushMatrix();
				glBegin(GL_POLYGON);
					glVertex2f(vehicle[i].vehicle_posX,vehicle[i].vehicle_posY);
					glVertex2f(vehicle[i].vehicle_posX,vehicle[i].vehicle_posY+40);
					glVertex2f(65+vehicle[i].vehicle_posX,vehicle[i].vehicle_posY+40);
					glVertex2f(90+vehicle[i].vehicle_posX,vehicle[i].vehicle_posY+20);
					glVertex2f(65+vehicle[i].vehicle_posX,vehicle[i].vehicle_posY);
				glEnd();
			glPopMatrix();
		}
		else if(vehicle[i].orientation=='V'&&vehicle[i].direction==0){
			glPushMatrix();
				glBegin(GL_POLYGON);
					glVertex2f(vehicle[i].vehicle_posX,vehicle[i].vehicle_posY);
					glVertex2f(40+vehicle[i].vehicle_posX,vehicle[i].vehicle_posY);
					glVertex2f(40+vehicle[i].vehicle_posX,vehicle[i].vehicle_posY-65);
					glVertex2f(20+vehicle[i].vehicle_posX,vehicle[i].vehicle_posY-90);
					glVertex2f(vehicle[i].vehicle_posX,vehicle[i].vehicle_posY-65);
				glEnd();
			glPopMatrix();			
		}
		else if(vehicle[i].orientation=='V'&&vehicle[i].direction==1){
			glPushMatrix();
				glBegin(GL_POLYGON);
					glVertex2f(vehicle[i].vehicle_posX,vehicle[i].vehicle_posY);
					glVertex2f(vehicle[i].vehicle_posX,vehicle[i].vehicle_posY+65);
					glVertex2f(20+vehicle[i].vehicle_posX,vehicle[i].vehicle_posY+90);
					glVertex2f(40+vehicle[i].vehicle_posX,vehicle[i].vehicle_posY+65);
					glVertex2f(40+vehicle[i].vehicle_posX,vehicle[i].vehicle_posY);
				glEnd();
			glPopMatrix();			
		}

	}

}



void draw_object(){		//for drawing the road

//road
	int i,x,y;
//horizontal_road
	y=ver_gap;
	glColor3f(0.2,0.2,0.2);
	for(i=1;i<=3;i++){
		glBegin(GL_POLYGON);
			glVertex2f(0,y);
			glVertex2f(0,y+road_width);
			glVertex2f(width,y+road_width);
			glVertex2f(width,y);
		glEnd();
		y+=(ver_road_gap+road_width);
	}	

//vertical_road
	x=hor_gap;
	for(i=1;i<=4;i++){
		glBegin(GL_POLYGON);
			glVertex2f(x,0);
			glVertex2f(x,height);
			glVertex2f(x+road_width,height);
			glVertex2f(x+road_width,0);
		glEnd();
		x+=(hor_road_gap+road_width);		
	}

//road_strip
	int j=0,gap=50,t,t1;
	double hh[3];
	hh[0]=ver_gap+road_width*1.0/2-2.5,hh[1]=hh[0]+road_width+ver_road_gap,hh[2]=hh[1]+road_width+ver_road_gap;

	glColor3f(1.0,1.0,1.0);

	vector<double> v;
	v.p_b(0.0);
	v.p_b(hor_gap+road_width);
	v.p_b(hor_gap+2*road_width+hor_road_gap);
	v.p_b(hor_gap+3*road_width+2*hor_road_gap);
	v.p_b(hor_gap+4*road_width+3*hor_road_gap);

for(i=0;i<5;i++){

	if(i==0)
		t=10,t1=75;
	else
		t=20,t1=100;
	
	for(j=0;j<3;j++){
		glBegin(GL_POLYGON);
			glVertex2f(v[i]+t,hh[j]);
			glVertex2f(v[i]+t,hh[j]+5);
			glVertex2f(v[i]+t+t1,hh[j]+5);
			glVertex2f(v[i]+t+t1,hh[j]);
		glEnd();
	}

}
	double vv[4];
	vv[0]=hor_gap+road_width*1.0/2-2.5,vv[1]=vv[0]+road_width+hor_road_gap,vv[2]=vv[1]+road_width+hor_road_gap,vv[3]=vv[2]+road_width+hor_road_gap;

	v.clear();
	v.p_b(0.0);
	v.p_b(ver_gap+road_width);
	v.p_b(ver_gap+2*road_width+ver_road_gap);
	v.p_b(ver_gap+3*road_width+2*ver_road_gap);

for(i=0;i<4;i++){

	if(i==0)
		t=10,t1=50;
	else
		t=10,t1=75;
	
	for(j=0;j<4;j++){
		glBegin(GL_POLYGON);
			glVertex2f(vv[j],v[i]+t);
			glVertex2f(vv[j],v[i]+t+t1);
			glVertex2f(vv[j]+5,v[i]+t+t1);
			glVertex2f(vv[j]+5,v[i]+t);
		glEnd();
	}

}

//car
	glPushMatrix();
		glColor3f(1.0,0.0,0.0);
		glBegin(GL_POLYGON);
			glVertex2f(10+car_speedX,ver_gap+0.5*road_width+10);
			glVertex2f(10+car_speedX,ver_gap+0.5*road_width+50);
			glVertex2f(75+car_speedX,ver_gap+0.5*road_width+50);
			glVertex2f(100+car_speedX,ver_gap+0.5*road_width+40);
			glVertex2f(100+car_speedX,ver_gap+0.5*road_width+20);
			glVertex2f(75+car_speedX,ver_gap+0.5*road_width+10);
		glEnd();
	glPopMatrix();

	draw_vehicles();

}


void draw_path(){		//for displaying the shortest path to be followed
	glColor3f(1.0,0.0,0.0);
	stack<pair<int,int> > st;
	
	pair<int,int> p=dest;
	pair<int,int> q;
	pair<int,int> pq1,pq2;

	while(p!=start){
		st.push(p);
		path.push(p);
		p=parent[p];
	}
	
	p=start;

	while(!st.empty()){
		q=st.top();
		pq1=point_map[m_p(p.first,p.second)];
		pq2=point_map[m_p(q.first,q.second)];

		glBegin(GL_LINES);
		    glVertex2f(pq1.first,pq1.second);
		    glVertex2f(pq2.first,pq2.second);
		glEnd();

		p=q;
		st.pop();
	}
	draw=true;
}