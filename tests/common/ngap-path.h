/*
 * Copyright (C) 2019,2020 by Sukchan Lee <acetcom@gmail.com>
 *
 * This file is part of Open5GS.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef TEST_NGAP_PATH_H
#define TEST_NGAP_PATH_H

#ifdef __cplusplus
extern "C" {
#endif
int testngap_get_ran_ue_ngap_id(test_ue_t *test_ue, ogs_pkbuf_t *pkbuf);


void testngap_recv(test_ue_t *test_ue, ogs_pkbuf_t *pkbuf);
void testngap_send_to_nas(test_ue_t *test_ue, NGAP_NAS_PDU_t *nasPdu);

#ifdef __cplusplus
}
#endif

#endif /* TEST_NGAP_PATH_H */
