//==============================================================================
//
//  OvenMediaEngine
//
//  Created by Kwon Keuk Han
//  Copyright (c) 2018 AirenSoft. All rights reserved.
//
//==============================================================================
#include "video_track.h"

VideoTrack::VideoTrack()
	: _framerate(0),
	  _framerate_conf(0),
	  _framerate_estimated(0),
	  _video_timescale(0),
	  _width(0),
	  _height(0),
		_key_frame_interval(0),
	  _key_frame_interval_conf(0),
	  _b_frames(0),
	  _has_bframe(false),
	  _preset(""),
	  _thread_count(0)
{
}



void VideoTrack::SetWidth(int32_t width)
{
	_width = width;
}

int32_t VideoTrack::GetWidth() const
{
	return _width;
}

void VideoTrack::SetHeight(int32_t height)
{
	_height = height;
}

int32_t VideoTrack::GetHeight() const
{
	return _height;
}

void VideoTrack::SetVideoTimestampScale(double scale)
{
	_video_timescale = scale;
}

double VideoTrack::GetVideoTimestampScale() const
{
	return _video_timescale;
}

void VideoTrack::SetPreset(ov::String preset)
{
	_preset = preset;
}

ov::String VideoTrack::GetPreset() const
{
	return _preset;
}

void VideoTrack::SetProfile(ov::String profile)
{
	_profile = profile;
}

ov::String VideoTrack::GetProfile() const
{
	return _profile;
}

void VideoTrack::SetHasBframes(bool has_bframe)
{
	_has_bframe = has_bframe;
}

bool VideoTrack::HasBframes() const
{
	return _has_bframe;
}

void VideoTrack::SetThreadCount(int thread_count)
{
	_thread_count = thread_count;
}

int VideoTrack::GetThreadCount()
{
	return _thread_count;
}

int32_t VideoTrack::GetKeyFrameInterval() const
{
	if(_key_frame_interval_conf > 0)
	{
		return _key_frame_interval_conf;
	}

	return _key_frame_interval;
}

void VideoTrack::SetKeyFrameIntervalByMeasured(int32_t key_frame_interval)
{
	_key_frame_interval = key_frame_interval;
}

int32_t VideoTrack::GetKeyFrameIntervalByMeasured() const
{
	return _key_frame_interval;
}

void VideoTrack::SetKeyFrameIntervalByConfig(int32_t key_frame_interval)
{
	_key_frame_interval_conf = key_frame_interval;
}

int32_t VideoTrack::GetKeyFrameIntervalByConfig() const
{
	return _key_frame_interval_conf;
}

void VideoTrack::SetBFrames(int32_t b_frames)
{
	_b_frames = b_frames;
}

int32_t VideoTrack::GetBFrames()
{
	return _b_frames;
}

void VideoTrack::SetColorspace(int colorspace)
{
	_colorspace = colorspace;
}

int VideoTrack::GetColorspace() const
{
	return _colorspace;
}

double VideoTrack::GetFrameRate() const
{
	if(_framerate_conf > 0)
	{
		return _framerate_conf;
	}
	else if(_framerate_estimated > 0)
	{
		return _framerate_estimated;
	}

	return _framerate;
}

void VideoTrack::SetEstimateFrameRate(double framerate)
{
	_framerate_estimated = framerate;
}

double VideoTrack::GetEstimateFrameRate() const
{
	return _framerate_estimated;
}

void VideoTrack::SetFrameRateByMeasured(double framerate)
{
	_framerate = framerate;
}

double VideoTrack::GetFrameRateByMeasured() const
{
	return _framerate;
}

void VideoTrack::SetFrameRateByConfig(double framerate)
{
	_framerate_conf = framerate;
}

double VideoTrack::GetFrameRateByConfig() const
{
	return _framerate_conf;
}

void VideoTrack::SetWidthByConfig(int32_t width)
{
	_width_conf = width;
}
int32_t VideoTrack::GetWidthByConfig() const
{
	return _width_conf;
}

void VideoTrack::SetHeightByConfig(int32_t height)
{
	_height_conf = height;
}

int32_t VideoTrack::GetHeightByConfig() const
{
	return _height_conf;
}

void VideoTrack::SetHardwareAccel(bool hwaccel)
{
	_use_hwaccel = hwaccel;
}
bool VideoTrack::GetHardwareAccel() const
{
	return _use_hwaccel;
}
