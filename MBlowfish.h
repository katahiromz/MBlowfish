// MBlowfish.h -- Blowfish encryption and decryption tool
////////////////////////////////////////////////////////////////////////////

#pragma once

#include <cstdlib>
#include <cstdint>

struct MBlowfishImpl;

class MBlowfish
{
public:
    MBlowfish();
    MBlowfish(const char *passwd);
    MBlowfish(const char *passwd, size_t len);
    virtual ~MBlowfish();

    void SetPassword(const char *passwd);
    void SetPassword(const char *passwd, size_t len);

    // NOTE: Parameter bytes must be a multiple of 8.
    bool Encrypt(void *ptr, uint32_t bytes);
    bool Decrypt(void *ptr, uint32_t bytes);

    uint8_t *EncryptWithLength(const void *ptr, uint32_t& length);
    uint8_t *DecryptWithLength(const void *ptr, uint32_t& length);

    void Reset();

protected:
    MBlowfishImpl *m_pimpl;
};

////////////////////////////////////////////////////////////////////////////
