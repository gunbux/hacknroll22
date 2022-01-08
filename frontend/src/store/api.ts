import axios from 'axios';

export default axios.create({
  baseURL: `http://192.168.101.134`,
  validateStatus: (status) => {
    return status >= 200 && status < 400;
  }
});