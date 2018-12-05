#include <iostream>
using namespace std;

class audioClip{
private:
  int channel;
  int resolution;
  int sampleRate;
public:
  audioClip()
  {
    channel = 1;
    resolution = 8;
    sampleRate = 22050;
  }

int set_channel(int chan)
{
  if(chan==1 || chan==2)
   {
     channel = chan;
   }
   else
   {
     std::cout << "Your channel input is incorrect" << '\n';
   }
}
void get_channel()
{
  cout<<"Channel Value : "<<channel<<endl;
}
int set_resolution(int res)
{
  if(res==8 || res==16 || res==24)
  {
      resolution = res;
  }
  else
  {
    std::cout << "Your Resolution input is incorrect" << '\n';
  }

}
void get_resolution()
{
  cout<<"Resolution Value : "<<resolution<<endl;
}
int set_sampleRate(int samp)
{
  if(samp==22050 || samp==44100 || samp==88200)
  {
    sampleRate = samp;
  }
  else
  {
    std::cout << "Your SampleRate input is incorrect" << '\n';
  }
}
void get_sampleRate()
{
  cout<<"SampleRate Value : "<<sampleRate<<endl;
}


bool StudioQuality()
{
  if(channel==2 && resolution==24 && sampleRate==88200)
  {
    return true;
  }
  else
  {
    return false;
  }

}

double dataSize(int time)
{
  int bytes;
  return bytes = time*channel*(resolution/8)*sampleRate;

}



};


int main(int argc, char const *argv[]) {

   int quality, bytes;

 audioClip Hello;

 Hello.set_channel(2);
 Hello.set_resolution(24);
 Hello.set_sampleRate(88200);
 Hello.get_channel();
 Hello.get_resolution();
 Hello.get_sampleRate();
 quality = Hello.StudioQuality();
 if(quality==1)
 {
   std::cout << "Your Audio Clip has maximum quality" << '\n';
 }
 else
 {
   std::cout << "Your Audio do not have maximum quality" << '\n';
 }
 bytes =  Hello.dataSize(2);     // giving the time of audio clip
 cout<<"Your Audio Clip size is "<<bytes<<" bytes"<<endl;



  return 0;
}
