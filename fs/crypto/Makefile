obj-$(CONFIG_FS_ENCRYPTION)	+= fscrypto.o

fscrypto-y := crypto.o fname.o hooks.o keyinfo.o policy.o
fscrypto-$(CONFIG_BLOCK) += bio.o
fscrypto-$(CONFIG_DDAR) += fscrypt_ddar.o
fscrypto-$(CONFIG_FSCRYPT_SDP) += sdp/sdp_cache.o sdp/sdp_dek.o sdp/sdp_ioctl.o sdp/sdp_name.o sdp/sdp_xattr.o sdp/sdp_crypto.o
