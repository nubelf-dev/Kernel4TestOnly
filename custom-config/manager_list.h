#ifndef __MANAGER_LIST_H
#define __MANAGER_LIST_H

/* Next-Manager
 * Team: ThRE Team + Custom Fork by nubelf-dev
 * Deskripsi: Daftar manager yang didukung oleh kernel.
 */

struct manager_identity {
    const char *package_name;
    const char *hash;
    const uint32_t sig_size;
};

static const struct manager_identity allowed_managers[] = {
    /* === Entries dari ThRE-Team v3.3.0-enjoy (jangan diubah) === */
    {
        .package_name = "com.rifsxd.ksunext",  // KernelSU-Next official
        .hash = "79e590113c4c4c0c222978e413a5faa801666957b1212a328e46c00c69821bf7",
        .sig_size = 0x3e6
    },
    {
        .package_name = "vctsrt.cntgtj.uqfwgg",  // KernelSU-Next Spoof
        .hash = "79e590113c4c4c0c222978e413a5faa801666957b1212a328e46c00c69821bf7",
        .sig_size = 0x3e6
    },
    {
        .package_name = "id.i.bi",  // Next Manager Spoof (ThRE-Team linex)
        .hash = "1ab6077099505a4f5ff851732d5d965a4908af7f60c871f23b4b3a58e80e6cd3",
        .sig_size = 0x31c
    },
    {
        .package_name = "id.next.manager",  // Next Manager (ThRE-Team linex)
        .hash = "1ab6077099505a4f5ff851732d5d965a4908af7f60c871f23b4b3a58e80e6cd3",
        .sig_size = 0x31c
    },
    /* === Entry tambahan: Custom Fork nubelf-dev (debug-signed by CI) === */
    {
        .package_name = "id.next.manager",  // Custom Fork spoofed (no avatar contributors)
        .hash = "bdcbd4513fa3c6cf86d2de19ee342428f77e7027c5d1d8d6713f00c386db9b1b",
        .sig_size = 0x2e8
    },
};

#endif
