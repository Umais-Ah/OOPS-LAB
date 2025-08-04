#include <iostream>
using namespace std;

class MediaFile
{
protected:
    string title;
    int duration;

public:
    
    MediaFile() {
        title="";
        duration=0;
    }
    virtual void play() = 0;
};
class AudioFile : public MediaFile
{
private:
    string audioFormat;

public:
    AudioFile(string title, int duration, string audioFormat) : MediaFile(), audioFormat(audioFormat) {
        this->title=title;
        this->duration=duration;
    }
    void play()
    {
        cout << "Playing Audio File :" << title << "| duration :" << duration << "| Audio Format" << audioFormat << endl;
    }
};

class VideoFile : public MediaFile
{
private:
    string resolution;

public:
    VideoFile(string title, int duration, string resolution) : MediaFile(), resolution(resolution) {
        this->title=title;
        this->duration=duration;
    }

    void play()
    {
        cout << "Playing Video File :" << title << "| duration :" << duration << "| Resolution" << resolution << endl;
    }
};

int main(){
    string type, title, resolution, audioFormat;
    int duration;
    int count = 0;
    MediaFile *m[3];
    while (count < 3){
        cout << "Enter type of media file :";
        cin >> type;
        if (type == "Video_File")
        {
            cout<<endl<< "Enter name :";
            cin >> title;
            cout<<endl<< "Enter duration :";
            cin >> duration;
            cout <<endl<<"Enter resolution :";
            cin >> resolution;
            m[count] = {new VideoFile(title, duration, resolution)};
            count++;
        }

        else if (type == "Audio_File"){
        {
            cout <<endl<< "Enter name :";
            cin >> title;
            cout <<endl<< "Enter duration :";
            cin >> duration;
            cout <<endl<<"Enter Audio Format :";
            cin >> audioFormat;
            m[count] = {new AudioFile(title, duration, audioFormat)};
            count++;
        }
    }
    else{
        cout << "Invalid Type" << endl;
    }

    
}

for (int i = 0; i < 3; i++){
    m[i]->play();
}
}