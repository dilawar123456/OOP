#include <iostream>
using namespace std;
class UAV
{
    public:
    void takeoff()
    {
        cout<<"Taking Off"<<endl;

    }
    void land()
    {
        cout<<"Landing"<<endl;

    }
};
class SurvellienceUAV: public virtual  UAV
{
    string name;
    double weight;
    double maxAltitude;
    double zoomLevel;
    double recordingCapacity;
    bool isNightVision;
    public:
   virtual  void display()
    {
        cout<<"I am "<<name<<" UAV"<<endl;
        cout<<"My name is : "<<name<<endl;
        cout<<"My weight is : "<<weight<<" kg"<<endl;
        cout<<"My altitude is : "<<maxAltitude<<" ft"<<endl;
        cout<<"My Zoom level is : "<<zoomLevel<<" x"<<endl;
        cout<<"My recording Capacity is : "<<recordingCapacity<<" GB"<<endl;
        if(isNightVision==true)
        {
            cout<<"I have a Night Vision "<<endl;

        }
        else
        {
            cout<<" I do not have a Night Vision"<<endl;
        }
        RecordVideo();

    }
    SurvellienceUAV(string name="",double weight=0,double maxAltitude=0,double zoomLevel=0,double recordingCapacity=0,bool isNigtVision=true)
    {
        setName(name);
        setweight(weight);
        setMaxAltitude(maxAltitude);
        setZoomLevel(zoomLevel);
        setRecordingCapacity(recordingCapacity);
        setNightVision(isNightVision);
    }
    void setName(string name)
    {
        this->name=name;
    }
    void setweight(double weight)
    {
        this->weight=weight;
    }
    void setMaxAltitude(double maxAltitude)
    {
        this->maxAltitude=maxAltitude;
    }
    void setZoomLevel(double zoomLevel)
    {
        this->zoomLevel=zoomLevel;
    }
    void setRecordingCapacity(double recordingCapacity)
    {
        this->recordingCapacity=recordingCapacity;
    }
    void setNightVision(bool isNightVision)
    {
        this->isNightVision=isNightVision;
    }
    void captureImage()
    {
        cout<<"Image Captured"<<endl;
    }
    void RecordVideo()
    {
        cout<<"Recording Video"<<endl;

    }
    
};
class CargoUAV: public virtual  UAV
{
    string name;
    double weight;
    double maxAltitude;
    double cargoArea;
    public:
   virtual void display()
    {
        cout<<"I am a Cargo Delivery UAV"<<endl;
        cout<<"My name is : "<<name<<endl;
        cout<<"My weight is : "<<weight<<" kg"<<endl;
        cout<<"My altitude is : "<<maxAltitude<<" ft"<<endl;
        cout<<"My cargo Area is : "<<cargoArea<<endl;
        DeliverCargo();
        
    }
    CargoUAV(string name,double weight,double maxAltitude,double cargoArea)
    {
        setName(name);
        setweight(weight);
        setMaxAltitude(maxAltitude);
        setCargoArea(cargoArea);
    }
     void setName(string name)
    {
        this->name=name;
    }
    void setweight(double weight)
    {
        this->weight=weight;
    }
    void setMaxAltitude(double maxAltitude)
    {
        this->maxAltitude=maxAltitude;
    }
    void setCargoArea(double cargoArea)
    {
        this->cargoArea=cargoArea;
    }
    void DeliverCargo()
    {
        cout<<"Delivering Cargo"<<endl;
    }
    double getCargoArea()
    {
        return cargoArea;
    }
};
class MultiPurposeUAV:public SurvellienceUAV, public CargoUAV
{
    double SolarPanelEfficiency;
    public:
    MultiPurposeUAV(string name="",double weight=0,double altitude=0,double zoomlevel=0,double recordingCapacity=0,bool isNigtVision=true,double cargoArea=0,double SolarPanelEfficiency=0):SurvellienceUAV(name,weight,altitude,zoomlevel,recordingCapacity,isNigtVision),CargoUAV(name,weight,altitude,cargoArea)
    {
        
        this->SolarPanelEfficiency=SolarPanelEfficiency;
    }
    void display()
    {
        SurvellienceUAV::display();
        cout<<"My cargo area is : "<<getCargoArea()<<endl;
        cout<<"My solar panel Efficiency is : "<<SolarPanelEfficiency<<endl;


    }
    void setSolarPanelEfficiency(double Efficiency)
    {
        this->SolarPanelEfficiency=Efficiency;
    }
    void DeliverCargoWithSurvellience()
    {
        cout<<"I am going to deliver Cargo along with Survillience"<<endl;
        takeoff();
        RecordVideo();
        land();
        DeliverCargo();

    }
};
int main()
{
    SurvellienceUAV s1("Survellience Drone",16.700,1000,20,3,true);
    s1.display();
    cout<<"\n\n";

    CargoUAV c1("Cargo Drone",14.5,3000,40);
    c1.display();
    cout<<"\n\n";

    MultiPurposeUAV m1("Multi Purpose Drone",10.400,2000,20,5,true,5,5);
    m1.display();
    cout<<"\n";
    m1.DeliverCargoWithSurvellience();
    



}