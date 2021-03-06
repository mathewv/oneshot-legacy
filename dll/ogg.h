#ifndef OGG_H
#define OGG_H

#include "globals.h"

#define ENABLE_SNDFILE_WINDOWS_PROTOTYPES 1
#include <sndfile.h>

sf_count_t wav_vio_filelen(void *data);
sf_count_t wav_vio_seek(sf_count_t offset, int whence, void *data);
sf_count_t wav_vio_read(void *ptr, sf_count_t count, void *data);
sf_count_t wav_vio_write(const void *ptr, sf_count_t count, void *data);
sf_count_t wav_vio_tell(void *data);

void ogg_read(LPWSTR szFile);
void ogg_free();

#endif
