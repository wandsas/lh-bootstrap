
# Sources

url := git://git.skarnet.org
suffix :=

SKALIBS_VERSION := 8052d3396ddcbbbfabd0a06ea66c36cec8439ea4
EXECLINE_VERSION := 093161d9ae606141027efa597ed9d57bc88d0ce2
S6_PORTABLE_UTILS_VERSION := 9e064f1da7921319c342f121602c61a9f3f7a0ec
S6_LINUX_UTILS_VERSION := e4344751c2f1bd7a2f73cbd068de42cea844d460
S6_DNS_VERSION := 89c0ec11d4f10401f6d2311f7d8af7b17a1732ce
S6_NETWORKING_VERSION := 10f60c0d4dd8882e5a7553efe33522c958f73e57
S6_VERSION := 2051574efa08de08488810669b21d15f387aa3e8
S6_RC_VERSION := 9343e7be5ac2941359808f013e107a03f232a377
S6_LINUX_INIT_VERSION := 22d026b0616dff48b5bed70ced91b7578c8222c7
MDEVD_VERSION := d44a4f72892a89f757bdf7c0243f1917d27ee889
BCNM_VERSION := 7677bcd347d9d8b53f4d3c01bd62838a08d40a6f


$(OUTPUT)/sources/.lh_skalibs_cloned: | $(OUTPUT)/tmp/.lh_prepared
	if test -d $(OUTPUT)/sources/skalibs ; then cd $(OUTPUT)/sources/skalibs && setuidgid $(NORMALUSER) git fetch ; else cd $(OUTPUT)/sources && setuidgid $(NORMALUSER) git clone $(url)/skalibs$(suffix) skalibs ; fi
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/sources/skalibs git checkout $(SKALIBS_VERSION)
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/sources/skalibs redirfd -w 1 package/deps-build true
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/sources/.lh_execline_cloned: | $(OUTPUT)/tmp/.lh_prepared
	if test -d $(OUTPUT)/sources/execline ; then cd $(OUTPUT)/sources/execline && setuidgid $(NORMALUSER) git fetch ; else cd $(OUTPUT)/sources && setuidgid $(NORMALUSER) git clone $(url)/execline$(suffix) execline ; fi
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/sources/execline git checkout $(EXECLINE_VERSION)
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/sources/execline redirfd -w 1 package/deps-build true
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/sources/.lh_s6pu_cloned: | $(OUTPUT)/tmp/.lh_prepared
	if test -d $(OUTPUT)/sources/s6-portable-utils ; then cd $(OUTPUT)/sources/s6-portable-utils && setuidgid $(NORMALUSER) git fetch ; else cd $(OUTPUT)/sources && setuidgid $(NORMALUSER) git clone $(url)/s6-portable-utils$(suffix) s6-portable-utils ; fi
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/sources/s6-portable-utils git checkout $(S6_PORTABLE_UTILS_VERSION)
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/sources/s6-portable-utils redirfd -w 1 package/deps-build true
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/sources/.lh_s6lu_cloned: | $(OUTPUT)/tmp/.lh_prepared
	if test -d $(OUTPUT)/sources/s6-linux-utils ; then cd $(OUTPUT)/sources/s6-linux-utils && setuidgid $(NORMALUSER) git fetch ; else cd $(OUTPUT)/sources && setuidgid $(NORMALUSER) git clone $(url)/s6-linux-utils$(suffix) s6-linux-utils ; fi
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/sources/s6-linux-utils git checkout $(S6_LINUX_UTILS_VERSION)
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/sources/s6-linux-utils redirfd -w 1 package/deps-build true
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/sources/.lh_s6dns_cloned: | $(OUTPUT)/tmp/.lh_prepared
	if test -d $(OUTPUT)/sources/s6-dns ; then cd $(OUTPUT)/sources/s6-dns && setuidgid $(NORMALUSER) git fetch ; else cd $(OUTPUT)/sources && setuidgid $(NORMALUSER) git clone $(url)/s6-dns$(suffix) s6-dns ; fi
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/sources/s6-dns git checkout $(S6_DNS_VERSION)
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/sources/s6-dns redirfd -w 1 package/deps-build true
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/sources/.lh_s6net_cloned: | $(OUTPUT)/tmp/.lh_prepared
	if test -d $(OUTPUT)/sources/s6-networking ; then cd $(OUTPUT)/sources/s6-networking && setuidgid $(NORMALUSER) git fetch ; else cd $(OUTPUT)/sources && setuidgid $(NORMALUSER) git clone $(url)/s6-networking$(suffix) s6-networking ; fi
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/sources/s6-networking git checkout $(S6_NETWORKING_VERSION)
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/sources/s6-networking redirfd -w 1 package/deps-build true
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/sources/.lh_s6_cloned: | $(OUTPUT)/tmp/.lh_prepared
	if test -d $(OUTPUT)/sources/s6 ; then cd $(OUTPUT)/sources/s6 && setuidgid $(NORMALUSER) git fetch ; else cd $(OUTPUT)/sources && setuidgid $(NORMALUSER) git clone $(url)/s6$(suffix) s6 ; fi
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/sources/s6 git checkout $(S6_VERSION)
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/sources/s6 redirfd -w 1 package/deps-build true
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/sources/.lh_s6rc_cloned: | $(OUTPUT)/tmp/.lh_prepared
	if test -d $(OUTPUT)/sources/s6-rc ; then cd $(OUTPUT)/sources/s6-rc && setuidgid $(NORMALUSER) git fetch ; else cd $(OUTPUT)/sources && setuidgid $(NORMALUSER) git clone $(url)/s6-rc$(suffix) s6-rc ; fi
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/sources/s6-rc git checkout $(S6_RC_VERSION)
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/sources/s6-rc redirfd -w 1 package/deps-build true
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/sources/.lh_s6li_cloned: | $(OUTPUT)/tmp/.lh_prepared
	if test -d $(OUTPUT)/sources/s6-linux-init ; then cd $(OUTPUT)/sources/s6-linux-init && setuidgid $(NORMALUSER) git fetch ; else cd $(OUTPUT)/sources && setuidgid $(NORMALUSER) git clone $(url)/s6-linux-init$(suffix) s6-linux-init ; fi
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/sources/s6-linux-init git checkout $(S6_LINUX_INIT_VERSION)
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/sources/s6-linux-init redirfd -w 1 package/deps-build true
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/sources/.lh_mdevd_cloned: | $(OUTPUT)/tmp/.lh_prepared
	if test -d $(OUTPUT)/sources/mdevd ; then cd $(OUTPUT)/sources/mdevd && setuidgid $(NORMALUSER) git fetch ; else cd $(OUTPUT)/sources && setuidgid $(NORMALUSER) git clone $(url)/mdevd$(suffix) mdevd ; fi
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/sources/mdevd git checkout $(MDEVD_VERSION)
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/sources/mdevd redirfd -w 1 package/deps-build true
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/sources/.lh_bcnm_cloned: | $(OUTPUT)/tmp/.lh_prepared
	if test -d $(OUTPUT)/sources/bcnm ; then cd $(OUTPUT)/sources/bcnm && setuidgid $(NORMALUSER) git fetch ; else cd $(OUTPUT)/sources && setuidgid $(NORMALUSER) git clone $(url)/bcnm$(suffix) bcnm ; fi
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/sources/bcnm git checkout $(BCNM_VERSION)
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/sources/bcnm redirfd -w 1 package/deps-build true
	exec setuidgid $(NORMALUSER) touch $@



# Build-build

$(OUTPUT)/build-build/.lh_skalibs_copied: $(OUTPUT)/sources/.lh_skalibs_cloned
	exec setuidgid $(NORMALUSER) rm -rf -- $(OUTPUT)/build-build/tmp/skalibs
	exec setuidgid $(NORMALUSER) cp -RP -- $(OUTPUT)/sources/skalibs $(OUTPUT)/build-build/tmp/skalibs
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/build-build/.lh_skalibs_configured: $(OUTPUT)/build-build/.lh_skalibs_copied $(OUTPUT)/build-build/.lh_gcc
	cd $(OUTPUT)/build-build/tmp/skalibs && setuidgid $(NORMALUSER) ./configure --enable-tai-clock --enable-slashpackage --with-default-path=/command:/bin --disable-shared
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/build-build/.lh_skalibs_built: $(OUTPUT)/build-build/.lh_skalibs_configured
	cd $(OUTPUT)/build-build/tmp/skalibs && setuidgid $(NORMALUSER) $(MAKE) all strip
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/build-build/.lh_skalibs_installed: $(OUTPUT)/build-build/.lh_skalibs_built
	cd $(OUTPUT)/build-build/tmp/skalibs && setuidgid $(NORMALUSER) $(MAKE) install update global-links DESTDIR=$(OUTPUT)/build-build
	exec setuidgid $(NORMALUSER) touch $@


$(OUTPUT)/build-build/.lh_execline_copied: $(OUTPUT)/sources/.lh_execline_cloned
	exec setuidgid $(NORMALUSER) rm -rf -- $(OUTPUT)/build-build/tmp/execline
	exec setuidgid $(NORMALUSER) cp -RP -- $(OUTPUT)/sources/execline $(OUTPUT)/build-build/tmp/execline
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/build-build/.lh_execline_configured: $(OUTPUT)/build-build/.lh_execline_copied $(OUTPUT)/build-build/.lh_skalibs_installed $(OUTPUT)/build-build/.lh_gcc
	cd $(OUTPUT)/build-build/tmp/execline && setuidgid $(NORMALUSER) ./configure --enable-slashpackage --disable-shared --with-sysdeps=$(OUTPUT)/build-build/package/prog/skalibs/sysdeps --with-include=$(OUTPUT)/build-build/package/prog/skalibs/include --with-lib=$(OUTPUT)/build-build/package/prog/skalibs/library
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/build-build/.lh_execline_built: $(OUTPUT)/build-build/.lh_execline_configured $(OUTPUT)/build-build/.lh_skalibs_installed
	cd $(OUTPUT)/build-build/tmp/execline && setuidgid $(NORMALUSER) $(MAKE) all strip
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/build-build/.lh_execline_installed: $(OUTPUT)/build-build/.lh_execline_built
	cd $(OUTPUT)/build-build/tmp/execline && setuidgid $(NORMALUSER) $(MAKE) install update global-links DESTDIR=$(OUTPUT)/build-build
	exec setuidgid $(NORMALUSER) touch $@


$(OUTPUT)/build-build/.lh_s6pu_copied: $(OUTPUT)/sources/.lh_s6pu_cloned
	exec setuidgid $(NORMALUSER) rm -rf -- $(OUTPUT)/build-build/tmp/s6-portable-utils
	exec setuidgid $(NORMALUSER) cp -RP -- $(OUTPUT)/sources/s6-portable-utils $(OUTPUT)/build-build/tmp/s6-portable-utils
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/build-build/.lh_s6pu_configured: $(OUTPUT)/build-build/.lh_s6pu_copied $(OUTPUT)/build-build/.lh_skalibs_installed $(OUTPUT)/build-build/.lh_gcc
	cd $(OUTPUT)/build-build/tmp/s6-portable-utils && setuidgid $(NORMALUSER) ./configure --enable-slashpackage --with-sysdeps=$(OUTPUT)/build-build/package/prog/skalibs/sysdeps --with-include=$(OUTPUT)/build-build/package/prog/skalibs/include --with-lib=$(OUTPUT)/build-build/package/prog/skalibs/library
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/build-build/.lh_s6pu_built: $(OUTPUT)/build-build/.lh_s6pu_configured $(OUTPUT)/build-build/.lh_skalibs_installed
	cd $(OUTPUT)/build-build/tmp/s6-portable-utils && setuidgid $(NORMALUSER) $(MAKE) all strip
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/build-build/.lh_s6pu_installed: $(OUTPUT)/build-build/.lh_s6pu_built
	cd $(OUTPUT)/build-build/tmp/s6-portable-utils && setuidgid $(NORMALUSER) $(MAKE) install update global-links DESTDIR=$(OUTPUT)/build-build
	exec setuidgid $(NORMALUSER) touch $@


$(OUTPUT)/build-build/.lh_s6_copied: $(OUTPUT)/sources/.lh_s6_cloned
	exec setuidgid $(NORMALUSER) rm -rf $(OUTPUT)/build-build/tmp/s6
	exec setuidgid $(NORMALUSER) cp -a $(OUTPUT)/sources/s6 $(OUTPUT)/build-build/tmp/s6
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/build-build/.lh_s6_configured: $(OUTPUT)/build-build/.lh_s6_copied $(OUTPUT)/build-build/.lh_skalibs_installed $(OUTPUT)/build-build/.lh_execline_installed $(OUTPUT)/build-build/.lh_gcc
	cd $(OUTPUT)/build-build/tmp/s6 && setuidgid $(NORMALUSER) ./configure --enable-slashpackage --disable-shared --with-sysdeps=$(OUTPUT)/build-build/package/prog/skalibs/sysdeps --with-include=$(OUTPUT)/build-build/package/prog/skalibs/include --with-lib=$(OUTPUT)/build-build/package/prog/skalibs/library --with-include=$(OUTPUT)/build-build/package/admin/execline/include --with-lib=$(OUTPUT)/build-build/package/admin/execline/library
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/build-build/.lh_s6_built: $(OUTPUT)/build-build/.lh_s6_configured $(OUTPUT)/build-build/.lh_skalibs_installed $(OUTPUT)/build-build/.lh_execline_installed
	cd $(OUTPUT)/build-build/tmp/s6 && setuidgid $(NORMALUSER) $(MAKE) all strip
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/build-build/.lh_s6_installed: $(OUTPUT)/build-build/.lh_s6_built
	cd $(OUTPUT)/build-build/tmp/s6 && setuidgid $(NORMALUSER) $(MAKE) install update global-links DESTDIR=$(OUTPUT)/build-build
	exec setuidgid $(NORMALUSER) touch $@


$(OUTPUT)/build-build/.lh_s6rc_copied: $(OUTPUT)/sources/.lh_s6rc_cloned
	exec setuidgid $(NORMALUSER) rm -rf $(OUTPUT)/build-build/tmp/s6-rc
	exec setuidgid $(NORMALUSER) cp -a $(OUTPUT)/sources/s6-rc $(OUTPUT)/build-build/tmp/s6-rc
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/build-build/.lh_s6rc_configured: $(OUTPUT)/build-build/.lh_s6rc_copied $(OUTPUT)/build-build/.lh_skalibs_installed $(OUTPUT)/build-build/.lh_execline_installed $(OUTPUT)/build-build/.lh_s6_installed $(OUTPUT)/build-build/.lh_gcc $(OUTPUT)/build-build/.lh_s6_installed
	cd $(OUTPUT)/build-build/tmp/s6-rc && setuidgid $(NORMALUSER) ./configure --enable-slashpackage --disable-shared --with-sysdeps=$(OUTPUT)/build-build/package/prog/skalibs/sysdeps --with-include=$(OUTPUT)/build-build/package/prog/skalibs/include --with-lib=$(OUTPUT)/build-build/package/prog/skalibs/library --with-include=$(OUTPUT)/build-build/package/admin/execline/include --with-lib=$(OUTPUT)/build-build/package/admin/execline/library --with-include=$(OUTPUT)/build-build/package/admin/s6/include --with-lib=$(OUTPUT)/build-build/package/admin/s6/library
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/build-build/.lh_s6rc_built: $(OUTPUT)/build-build/.lh_s6rc_configured $(OUTPUT)/build-build/.lh_skalibs_installed $(OUTPUT)/build-build/.lh_execline_installed $(OUTPUT)/build-build/.lh_s6_installed
	cd $(OUTPUT)/build-build/tmp/s6-rc && setuidgid $(NORMALUSER) $(MAKE) all strip
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/build-build/.lh_s6rc_installed: $(OUTPUT)/build-build/.lh_s6rc_built
	cd $(OUTPUT)/build-build/tmp/s6-rc && setuidgid $(NORMALUSER) $(MAKE) install update global-links DESTDIR=$(OUTPUT)/build-build
	exec setuidgid $(NORMALUSER) touch $@


$(OUTPUT)/build-build/.lh_s6dns_copied: $(OUTPUT)/sources/.lh_s6dns_cloned
	exec setuidgid $(NORMALUSER) rm -rf $(OUTPUT)/build-build/tmp/s6-dns
	exec setuidgid $(NORMALUSER) cp -a $(OUTPUT)/sources/s6-dns $(OUTPUT)/build-build/tmp/s6-dns
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/build-build/.lh_s6dns_configured: $(OUTPUT)/build-build/.lh_s6dns_copied $(OUTPUT)/build-build/.lh_skalibs_installed $(OUTPUT)/build-build/.lh_gcc
	cd $(OUTPUT)/build-build/tmp/s6-dns && setuidgid $(NORMALUSER) ./configure --enable-slashpackage --disable-shared --with-sysdeps=$(OUTPUT)/build-build/package/prog/skalibs/sysdeps --with-include=$(OUTPUT)/build-build/package/prog/skalibs/include --with-lib=$(OUTPUT)/build-build/package/prog/skalibs/library
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/build-build/.lh_s6dns_built: $(OUTPUT)/build-build/.lh_s6dns_configured $(OUTPUT)/build-build/.lh_skalibs_installed
	cd $(OUTPUT)/build-build/tmp/s6-dns && setuidgid $(NORMALUSER) $(MAKE) all strip
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/build-build/.lh_s6dns_installed: $(OUTPUT)/build-build/.lh_s6dns_built
	cd $(OUTPUT)/build-build/tmp/s6-dns && setuidgid $(NORMALUSER) $(MAKE) install update global-links DESTDIR=$(OUTPUT)/build-build
	exec setuidgid $(NORMALUSER) touch $@


$(OUTPUT)/build-build/.lh_skarnet_installed: $(OUTPUT)/build-build/.lh_skalibs_installed $(OUTPUT)/build-build/.lh_execline_installed $(OUTPUT)/build-build/.lh_s6pu_installed $(OUTPUT)/build-build/.lh_s6_installed $(OUTPUT)/build-build/.lh_s6rc_installed $(OUTPUT)/build-build/.lh_s6dns_installed
	exec setuidgid $(NORMALUSER) touch $@



# Build-host


$(OUTPUT)/build-host/.lh_skalibs_copied: $(OUTPUT)/sources/.lh_skalibs_cloned | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) s6-rmrf $(OUTPUT)/build-host/skalibs
	exec setuidgid $(NORMALUSER) s6-hiercopy $(OUTPUT)/sources/skalibs $(OUTPUT)/build-host/skalibs
	exec setuidgid $(NORMALUSER) s6-touch $@

$(OUTPUT)/build-host/.lh_skalibs_configured: $(OUTPUT)/build-host/.lh_skalibs_copied $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/build-host/skalibs export CC muslgcc ./configure --host=$(TRIPLE) --with-sysdeps=$(WD)/sysdeps/$(TRIPLE) --enable-tai-clock --enable-slashpackage --with-default-path=/command:/bin --disable-shared
	exec setuidgid $(NORMALUSER) s6-touch $@

$(OUTPUT)/build-host/.lh_skalibs_built: $(OUTPUT)/build-host/.lh_skalibs_configured $(OUTPUT)/build-host/bin/muslgcc| $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/build-host/skalibs $(MAKE) all strip
	exec setuidgid $(NORMALUSER) s6-touch $@

$(OUTPUT)/build-host/.lh_skalibs_installed: $(OUTPUT)/build-host/.lh_skalibs_built $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/tmp/.lh_prepared $(OUTPUT)/build-build/.lh_skarnet_installed
	cd $(OUTPUT)/build-host/skalibs && $(MAKE) install update global-links DESTDIR=$(OUTPUT)/rootfs
	exec setuidgid $(NORMALUSER) touch $@


$(OUTPUT)/build-host/.lh_execline_copied: $(OUTPUT)/sources/.lh_execline_cloned | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) s6-rmrf $(OUTPUT)/build-host/execline
	exec setuidgid $(NORMALUSER) s6-hiercopy $(OUTPUT)/sources/execline $(OUTPUT)/build-host/execline
	exec setuidgid $(NORMALUSER) s6-touch $@

$(OUTPUT)/build-host/.lh_execline_configured: $(OUTPUT)/build-host/.lh_execline_copied $(OUTPUT)/build-host/.lh_skalibs_installed $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/build-host/execline export CC muslgcc ./configure --host=$(TRIPLE) --enable-slashpackage --enable-static-libc --with-sysdeps=$(OUTPUT)/rootfs/package/prog/skalibs/sysdeps --with-include=$(OUTPUT)/rootfs/package/prog/skalibs/include --with-lib=$(OUTPUT)/rootfs/package/prog/skalibs/library
	exec setuidgid $(NORMALUSER) s6-touch $@

$(OUTPUT)/build-host/.lh_execline_built: $(OUTPUT)/build-host/.lh_execline_configured $(OUTPUT)/build-host/.lh_skalibs_installed $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/build-host/execline $(MAKE) all strip
	exec setuidgid $(NORMALUSER) s6-touch $@

$(OUTPUT)/build-host/.lh_execline_installed: $(OUTPUT)/build-host/.lh_execline_built $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/tmp/.lh_prepared $(OUTPUT)/build-build/.lh_skarnet_installed
	exec cd $(OUTPUT)/build-host/execline $(MAKE) install update global-links DESTDIR=$(OUTPUT)/rootfs
	exec setuidgid $(NORMALUSER) s6-touch $@


$(OUTPUT)/build-host/.lh_s6pu_copied: $(OUTPUT)/sources/.lh_s6pu_cloned | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) s6-rmrf $(OUTPUT)/build-host/s6-portable-utils
	exec setuidgid $(NORMALUSER) s6-hiercopy $(OUTPUT)/sources/s6-portable-utils $(OUTPUT)/build-host/s6-portable-utils
	exec setuidgid $(NORMALUSER) s6-touch $@

$(OUTPUT)/build-host/.lh_s6pu_configured: $(OUTPUT)/build-host/.lh_s6pu_copied $(OUTPUT)/build-host/.lh_skalibs_installed $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/build-host/s6-portable-utils export CC muslgcc ./configure --host=$(TRIPLE) --enable-slashpackage --enable-static-libc --with-sysdeps=$(OUTPUT)/rootfs/package/prog/skalibs/sysdeps --with-include=$(OUTPUT)/rootfs/package/prog/skalibs/include --with-lib=$(OUTPUT)/rootfs/package/prog/skalibs/library
	exec setuidgid $(NORMALUSER) s6-touch $@

$(OUTPUT)/build-host/.lh_s6pu_built: $(OUTPUT)/build-host/.lh_s6pu_configured $(OUTPUT)/build-host/.lh_skalibs_installed $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/build-host/s6-portable-utils $(MAKE) all strip
	exec setuidgid $(NORMALUSER) s6-touch $@

$(OUTPUT)/build-host/.lh_s6pu_installed: $(OUTPUT)/build-host/.lh_s6pu_built $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/tmp/.lh_prepared $(OUTPUT)/build-build/.lh_skarnet_installed
	exec cd $(OUTPUT)/build-host/s6-portable-utils $(MAKE) install update global-links DESTDIR=$(OUTPUT)/rootfs
	exec setuidgid $(NORMALUSER) s6-touch $@


$(OUTPUT)/build-host/.lh_s6lu_copied: $(OUTPUT)/sources/.lh_s6lu_cloned | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) s6-rmrf $(OUTPUT)/build-host/s6-linux-utils
	exec setuidgid $(NORMALUSER) s6-hiercopy $(OUTPUT)/sources/s6-linux-utils $(OUTPUT)/build-host/s6-linux-utils
	exec setuidgid $(NORMALUSER) s6-touch $@

$(OUTPUT)/build-host/.lh_s6lu_configured: $(OUTPUT)/build-host/.lh_s6lu_copied $(OUTPUT)/build-host/.lh_skalibs_installed $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/build-host/s6-linux-utils export CC muslgcc ./configure --host=$(TRIPLE) --enable-slashpackage --enable-static-libc --with-sysdeps=$(OUTPUT)/rootfs/package/prog/skalibs/sysdeps --with-include=$(OUTPUT)/rootfs/package/prog/skalibs/include --with-lib=$(OUTPUT)/rootfs/package/prog/skalibs/library
	exec setuidgid $(NORMALUSER) s6-touch $@

$(OUTPUT)/build-host/.lh_s6lu_built: $(OUTPUT)/build-host/.lh_s6lu_configured $(OUTPUT)/build-host/.lh_skalibs_installed $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/build-host/s6-linux-utils $(MAKE) all strip
	exec setuidgid $(NORMALUSER) s6-touch $@

$(OUTPUT)/build-host/.lh_s6lu_installed: $(OUTPUT)/build-host/.lh_s6lu_built $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/tmp/.lh_prepared $(OUTPUT)/build-build/.lh_skarnet_installed
	exec cd $(OUTPUT)/build-host/s6-linux-utils $(MAKE) install update global-links DESTDIR=$(OUTPUT)/rootfs
	exec setuidgid $(NORMALUSER) s6-touch $@


$(OUTPUT)/build-host/.lh_s6dns_copied: $(OUTPUT)/sources/.lh_s6dns_cloned | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) s6-rmrf $(OUTPUT)/build-host/s6-dns
	exec setuidgid $(NORMALUSER) s6-hiercopy $(OUTPUT)/sources/s6-dns $(OUTPUT)/build-host/s6-dns
	exec setuidgid $(NORMALUSER) s6-touch $@

$(OUTPUT)/build-host/.lh_s6dns_configured: $(OUTPUT)/build-host/.lh_s6dns_copied $(OUTPUT)/build-host/.lh_skalibs_installed $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/build-host/s6-dns export CC muslgcc ./configure --host=$(TRIPLE) --enable-slashpackage --enable-static-libc --with-sysdeps=$(OUTPUT)/rootfs/package/prog/skalibs/sysdeps --with-include=$(OUTPUT)/rootfs/package/prog/skalibs/include --with-lib=$(OUTPUT)/rootfs/package/prog/skalibs/library
	exec setuidgid $(NORMALUSER) s6-touch $@

$(OUTPUT)/build-host/.lh_s6dns_built: $(OUTPUT)/build-host/.lh_s6dns_configured $(OUTPUT)/build-host/.lh_skalibs_installed $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/build-host/s6-dns $(MAKE) all strip
	exec setuidgid $(NORMALUSER) s6-touch $@

$(OUTPUT)/build-host/.lh_s6dns_installed: $(OUTPUT)/build-host/.lh_s6dns_built $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/tmp/.lh_prepared $(OUTPUT)/build-build/.lh_skarnet_installed
	exec cd $(OUTPUT)/build-host/s6-dns $(MAKE) install update global-links DESTDIR=$(OUTPUT)/rootfs
	exec setuidgid $(NORMALUSER) s6-touch $@


$(OUTPUT)/build-host/.lh_s6net_copied: $(OUTPUT)/sources/.lh_s6net_cloned | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) s6-rmrf $(OUTPUT)/build-host/s6-networking
	exec setuidgid $(NORMALUSER) s6-hiercopy $(OUTPUT)/sources/s6-networking $(OUTPUT)/build-host/s6-networking
	exec setuidgid $(NORMALUSER) s6-touch $@

$(OUTPUT)/build-host/.lh_s6net_configured: $(OUTPUT)/build-host/.lh_s6net_copied $(OUTPUT)/build-host/.lh_skalibs_installed $(OUTPUT)/build-host/.lh_s6dns_installed $(OUTPUT)/build-host/.lh_execline_installed $(OUTPUT)/build-host/.lh_s6_installed $(OUTPUT)/build-host/.lh_bearssl_installed $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/build-host/s6-networking export CC muslgcc ./configure --host=$(TRIPLE) --enable-slashpackage --enable-static-libc --enable-ssl=bearssl --with-ssl-path=$(OUTPUT)/rootfs/opt/bearssl --with-sysdeps=$(OUTPUT)/rootfs/package/prog/skalibs/sysdeps --with-include=$(OUTPUT)/rootfs/package/prog/skalibs/include --with-lib=$(OUTPUT)/rootfs/package/prog/skalibs/library --with-include=$(OUTPUT)/rootfs/package/web/s6-dns/include --with-lib=$(OUTPUT)/rootfs/package/web/s6-dns/library --with-include=$(OUTPUT)/rootfs/package/admin/execline/include --with-lib=$(OUTPUT)/rootfs/package/admin/execline/library --with-include=$(OUTPUT)/rootfs/package/admin/s6/include --with-lib=$(OUTPUT)/rootfs/package/admin/s6/library
	exec setuidgid $(NORMALUSER) s6-touch $@

$(OUTPUT)/build-host/.lh_s6net_built: $(OUTPUT)/build-host/.lh_s6net_configured $(OUTPUT)/build-host/.lh_skalibs_installed $(OUTPUT)/build-host/.lh_s6dns_installed $(OUTPUT)/build-host/.lh_execline_installed $(OUTPUT)/build-host/.lh_s6_installed $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/build-host/s6-networking $(MAKE) all strip
	exec setuidgid $(NORMALUSER) s6-touch $@

$(OUTPUT)/build-host/.lh_s6net_installed: $(OUTPUT)/build-host/.lh_s6net_built $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/tmp/.lh_prepared $(OUTPUT)/build-build/.lh_skarnet_installed
	exec cd $(OUTPUT)/build-host/s6-networking $(MAKE) install update global-links DESTDIR=$(OUTPUT)/rootfs
	exec setuidgid $(NORMALUSER) s6-touch $@


$(OUTPUT)/build-host/.lh_s6_copied: $(OUTPUT)/sources/.lh_s6_cloned | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) s6-rmrf $(OUTPUT)/build-host/s6
	exec setuidgid $(NORMALUSER) s6-hiercopy $(OUTPUT)/sources/s6 $(OUTPUT)/build-host/s6
	exec setuidgid $(NORMALUSER) s6-touch $@

$(OUTPUT)/build-host/.lh_s6_configured: $(OUTPUT)/build-host/.lh_s6_copied $(OUTPUT)/build-host/.lh_skalibs_installed $(OUTPUT)/build-host/.lh_execline_installed $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/build-host/s6 export CC muslgcc ./configure --host=$(TRIPLE) --enable-slashpackage --enable-static-libc --with-sysdeps=$(OUTPUT)/rootfs/package/prog/skalibs/sysdeps --with-include=$(OUTPUT)/rootfs/package/prog/skalibs/include --with-lib=$(OUTPUT)/rootfs/package/prog/skalibs/library --with-include=$(OUTPUT)/rootfs/package/admin/execline/include --with-lib=$(OUTPUT)/rootfs/package/admin/execline/library
	exec setuidgid $(NORMALUSER) s6-touch $@

$(OUTPUT)/build-host/.lh_s6_built: $(OUTPUT)/build-host/.lh_s6_configured $(OUTPUT)/build-host/.lh_skalibs_installed $(OUTPUT)/build-host/.lh_execline_installed $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/build-host/s6 $(MAKE) all strip
	exec setuidgid $(NORMALUSER) s6-touch $@

$(OUTPUT)/build-host/.lh_s6_installed: $(OUTPUT)/build-host/.lh_s6_built $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/tmp/.lh_prepared $(OUTPUT)/build-build/.lh_skarnet_installed
	exec cd $(OUTPUT)/build-host/s6 $(MAKE) install update global-links DESTDIR=$(OUTPUT)/rootfs
	exec setuidgid $(NORMALUSER) s6-touch $@


$(OUTPUT)/build-host/.lh_s6rc_copied: $(OUTPUT)/sources/.lh_s6rc_cloned | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) s6-rmrf $(OUTPUT)/build-host/s6-rc
	exec setuidgid $(NORMALUSER) s6-hiercopy $(OUTPUT)/sources/s6-rc $(OUTPUT)/build-host/s6-rc
	exec setuidgid $(NORMALUSER) s6-touch $@

$(OUTPUT)/build-host/.lh_s6rc_configured: $(OUTPUT)/build-host/.lh_s6rc_copied $(OUTPUT)/build-host/.lh_skalibs_installed $(OUTPUT)/build-host/.lh_execline_installed $(OUTPUT)/build-host/.lh_s6_installed $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/build-host/s6-rc export CC muslgcc ./configure --host=$(TRIPLE) --enable-slashpackage --enable-static-libc --with-sysdeps=$(OUTPUT)/rootfs/package/prog/skalibs/sysdeps --with-include=$(OUTPUT)/rootfs/package/prog/skalibs/include --with-lib=$(OUTPUT)/rootfs/package/prog/skalibs/library --with-include=$(OUTPUT)/rootfs/package/admin/execline/include --with-lib=$(OUTPUT)/rootfs/package/admin/execline/library --with-include=$(OUTPUT)/rootfs/package/admin/s6/include --with-lib=$(OUTPUT)/rootfs/package/admin/s6/library
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/build-host/.lh_s6rc_built: $(OUTPUT)/build-host/.lh_s6rc_configured $(OUTPUT)/build-host/.lh_skalibs_installed $(OUTPUT)/build-host/.lh_execline_installed $(OUTPUT)/build-host/.lh_s6_installed $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/build-host/s6-rc $(MAKE) all strip
	exec setuidgid $(NORMALUSER) s6-touch $@

$(OUTPUT)/build-host/.lh_s6rc_installed: $(OUTPUT)/build-host/.lh_s6rc_built $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/tmp/.lh_prepared $(OUTPUT)/build-build/.lh_skarnet_installed
	exec cd $(OUTPUT)/build-host/s6-rc $(MAKE) install update global-links DESTDIR=$(OUTPUT)/rootfs
	exec setuidgid $(NORMALUSER) s6-touch $@


$(OUTPUT)/build-host/.lh_s6li_copied: $(OUTPUT)/sources/.lh_s6li_cloned | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) s6-rmrf $(OUTPUT)/build-host/s6-linux-init
	exec setuidgid $(NORMALUSER) s6-hiercopy $(OUTPUT)/sources/s6-linux-init $(OUTPUT)/build-host/s6-linux-init
	exec setuidgid $(NORMALUSER) s6-touch $@

$(OUTPUT)/build-host/.lh_s6li_configured: $(OUTPUT)/build-host/.lh_s6li_copied $(OUTPUT)/build-host/.lh_skalibs_installed $(OUTPUT)/build-host/.lh_execline_installed $(OUTPUT)/build-host/.lh_s6_installed $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/build-host/s6-linux-init export CC muslgcc ./configure --host=$(TRIPLE) --enable-slashpackage --enable-static-libc --with-sysdeps=$(OUTPUT)/rootfs/package/prog/skalibs/sysdeps --with-include=$(OUTPUT)/rootfs/package/prog/skalibs/include --with-lib=$(OUTPUT)/rootfs/package/prog/skalibs/library --with-include=$(OUTPUT)/build-build/package/admin/execline/include --with-lib=$(OUTPUT)/rootfs/package/admin/execline/library --with-include=$(OUTPUT)/build-build/package/admin/s6/include --with-lib=$(OUTPUT)/rootfs/package/admin/s6/library
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/build-host/.lh_s6li_built: $(OUTPUT)/build-host/.lh_s6li_configured $(OUTPUT)/build-host/.lh_skalibs_installed $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/build-host/s6-linux-init $(MAKE) all strip
	exec setuidgid $(NORMALUSER) s6-touch $@

$(OUTPUT)/build-host/.lh_s6li_installed: $(OUTPUT)/build-host/.lh_s6li_built $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/tmp/.lh_prepared $(OUTPUT)/build-build/.lh_skarnet_installed
	exec cd $(OUTPUT)/build-host/s6-linux-init $(MAKE) install update global-links DESTDIR=$(OUTPUT)/rootfs
	exec setuidgid $(NORMALUSER) s6-touch $@


$(OUTPUT)/build-host/.lh_mdevd_copied: $(OUTPUT)/sources/.lh_mdevd_cloned | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) s6-rmrf $(OUTPUT)/build-host/mdevd
	exec setuidgid $(NORMALUSER) s6-hiercopy $(OUTPUT)/sources/mdevd $(OUTPUT)/build-host/mdevd
	exec setuidgid $(NORMALUSER) s6-touch $@

$(OUTPUT)/build-host/.lh_mdevd_configured: $(OUTPUT)/build-host/.lh_mdevd_copied $(OUTPUT)/build-host/.lh_skalibs_installed $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/build-host/mdevd export CC muslgcc ./configure --host=$(TRIPLE) --enable-slashpackage --enable-static-libc --with-sysdeps=$(OUTPUT)/rootfs/package/prog/skalibs/sysdeps --with-include=$(OUTPUT)/rootfs/package/prog/skalibs/include --with-lib=$(OUTPUT)/rootfs/package/prog/skalibs/library
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/build-host/.lh_mdevd_built: $(OUTPUT)/build-host/.lh_mdevd_configured $(OUTPUT)/build-host/.lh_skalibs_installed $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/build-host/mdevd $(MAKE) all strip
	exec setuidgid $(NORMALUSER) s6-touch $@

$(OUTPUT)/build-host/.lh_mdevd_installed: $(OUTPUT)/build-host/.lh_mdevd_built $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/tmp/.lh_prepared $(OUTPUT)/build-build/.lh_skarnet_installed
	exec cd $(OUTPUT)/build-host/mdevd $(MAKE) install update global-links DESTDIR=$(OUTPUT)/rootfs
	exec setuidgid $(NORMALUSER) s6-touch $@


$(OUTPUT)/build-host/.lh_bcnm_copied: $(OUTPUT)/sources/.lh_bcnm_cloned | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) s6-rmrf $(OUTPUT)/build-host/bcnm
	exec setuidgid $(NORMALUSER) s6-hiercopy $(OUTPUT)/sources/bcnm $(OUTPUT)/build-host/bcnm
	exec setuidgid $(NORMALUSER) s6-touch $@

$(OUTPUT)/build-host/.lh_bcnm_configured: $(OUTPUT)/build-host/.lh_bcnm_copied $(OUTPUT)/build-host/.lh_skalibs_installed $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/build-host/bcnm export CC muslgcc ./configure --host=$(TRIPLE) --enable-slashpackage --enable-static-libc --with-sysdeps=$(OUTPUT)/rootfs/package/prog/skalibs/sysdeps --with-include=$(OUTPUT)/rootfs/package/prog/skalibs/include --with-lib=$(OUTPUT)/rootfs/package/prog/skalibs/library
	exec setuidgid $(NORMALUSER) touch $@

$(OUTPUT)/build-host/.lh_bcnm_built: $(OUTPUT)/build-host/.lh_bcnm_configured $(OUTPUT)/build-host/.lh_skalibs_installed $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) cd $(OUTPUT)/build-host/bcnm $(MAKE) all strip
	exec setuidgid $(NORMALUSER) s6-touch $@

$(OUTPUT)/build-host/.lh_bcnm_installed: $(OUTPUT)/build-host/.lh_bcnm_built $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/tmp/.lh_prepared $(OUTPUT)/build-build/.lh_skarnet_installed
	exec cd $(OUTPUT)/build-host/bcnm $(MAKE) install update global-links DESTDIR=$(OUTPUT)/rootfs
	exec setuidgid $(NORMALUSER) s6-touch $@


$(OUTPUT)/build-host/.lh_skarnet_installed: $(OUTPUT)/build-host/.lh_skalibs_installed $(OUTPUT)/build-host/.lh_execline_installed $(OUTPUT)/build-host/.lh_s6pu_installed $(OUTPUT)/build-host/.lh_s6lu_installed $(OUTPUT)/build-host/.lh_s6dns_installed $(OUTPUT)/build-host/.lh_s6net_installed $(OUTPUT)/build-host/.lh_s6_installed $(OUTPUT)/build-host/.lh_s6rc_installed $(OUTPUT)/build-host/.lh_s6li_installed $(OUTPUT)/build-host/.lh_mdevd_installed $(OUTPUT)/build-host/.lh_mdevd_installed $(OUTPUT)/build-host/bin/muslgcc | $(OUTPUT)/build-build/.lh_skarnet_installed
	exec setuidgid $(NORMALUSER) s6-touch $@
