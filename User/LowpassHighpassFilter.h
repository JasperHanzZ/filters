/**
 * @file   LowpassHighpassFilter.h
 * @brief  
 * @author Jasper Han
 * @date   2024/3/31
 *
 * Detailed description ....
 *
 */

#ifndef _LOWPASSHIGHPASSFILTER_H
#define _LOWPASSHIGHPASSFILTER_H
#include <vector>
#include "JuceHeader.h"

class LowpassHighpassFilter {
public:
    // setters
    void setHighpass(bool highpass);
    void setCutoffFrequency(float cutoffFrequency);
    void setSamplingRate(float samplingRate);

    // Does not necessarily need to use JUCE's audio buffer
    void processBlock(juce::AudioBuffer<float>&, juce::MidiBuffer&);

    bool highpass;
    float cutoffFrequency;
    float samplingRate;
private:


    // allpass filters' buffers: 1 sample per channel
    std::vector<float> dnBuffer;
};


#endif //_LOWPASSHIGHPASSFILTER_H
