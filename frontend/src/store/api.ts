import axios from 'axios';

export default axios.create({
  baseURL: `localhost`,
  validateStatus: (status) => {
    return status >= 200 && status < 400;
  }
});