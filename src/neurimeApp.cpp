#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class neurimeApp : public AppBasic {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
    void prepareSettings( Settings *settings );
};

void neurimeApp::setup()
{
}

void neurimeApp::mouseDown( MouseEvent event )
{
}

void neurimeApp::update()
{
}

void neurimeApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

void neurimeApp::prepareSettings( Settings *settings ){
    settings->setWindowSize( 800, 200 );
    settings->setFrameRate( 60.0f );
}

CINDER_APP_BASIC( neurimeApp, RendererGl )
